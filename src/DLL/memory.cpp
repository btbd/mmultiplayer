#include "stdafx.h"

ARRAY ArrayNew(unsigned int element_size) {
	ARRAY array;

	array.element_size = element_size;
	array.allocated = 0xFF;
	array.buffer = malloc(array.element_size * array.allocated);
	array.length = 0;

	return array;
}

void *ArrayGet(ARRAY *array, unsigned int index) {
	if (!array->buffer || !array->length || !array->allocated || !array->element_size) {
		return NULL;
	}

	return (void *)((int)array->buffer + (index * array->element_size));
}

void *ArraySet(ARRAY *array, unsigned int index, void *element) {
	if (!array->buffer || !array->allocated || !array->element_size) {
		return NULL;
	}

	if (index >= array->allocated) {
		array->allocated = index;
		array->buffer = realloc(array->buffer, array->allocated * array->element_size);
	}

	return memcpy((void *)((int)array->buffer + (index * array->element_size)), element, array->element_size);
}

void *ArrayPush(ARRAY *array, void *element) {
	if (!array->buffer || !array->allocated || !array->element_size) {
		return NULL;
	}

	if (array->length >= array->allocated) {
		array->allocated *= 2;
		array->buffer = realloc(array->buffer, array->allocated * array->element_size);
	}

	return memcpy((void *)((int)array->buffer + (array->length++ * array->element_size)), element, array->element_size);
}

void *ArrayPop(ARRAY *array) {
	void *element = ArrayGet(array, array->length - 1);
	array->length--;
	return element;
}

void ArrayFree(ARRAY *array) {
	if (array->buffer) {
		free(array->buffer);
	}

	memset(array, 0, sizeof(ARRAY));
}

char *WCharToChar(char *dest, wchar_t *src) {
	sprintf(dest, "%ws", src);

	return dest;
}

wchar_t *CharToWChar(wchar_t *dest, char *src) {
	int len = (int)strlen(src);
	dest[MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, src, len, dest, len)] = '\0';

	return dest;
}

int MessageBoxF(HWND hWnd, LPCSTR lpCaption, UINT uType, const LPCSTR lpText, ...) {
	char buffer[0xFFF];

	va_list args;
	va_start(args, lpText);
	vsprintf(buffer, lpText, args);
	va_end(args);

	return MessageBoxA(hWnd, buffer, lpCaption, uType);
}

PROCESSENTRY32 GetProcessInfoByName(wchar_t *exe_name) {
	PROCESSENTRY32 entry;
	memset(&entry, 0, sizeof(PROCESSENTRY32));
	entry.dwSize = sizeof(PROCESSENTRY32);

	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

	if (Process32First(snapshot, &entry)) {
		do {
			if (_wcsicmp(entry.szExeFile, exe_name) == 0) {
				CloseHandle(snapshot);
				return entry;
			}
		} while (Process32Next(snapshot, &entry));
	}

	CloseHandle(snapshot);
	return{ 0 };
}

MODULEENTRY32 GetModuleInfoByName(int process_id, wchar_t *module_name) {
	MODULEENTRY32 entry;
	memset(&entry, 0, sizeof(MODULEENTRY32));
	entry.dwSize = sizeof(MODULEENTRY32);

	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, process_id);

	if (Module32First(snapshot, &entry)) {
		do {
			if (_wcsicmp(entry.szModule, module_name) == 0) {
				CloseHandle(snapshot);
				return entry;
			}
		} while (Module32Next(snapshot, &entry));
	}

	CloseHandle(snapshot);
	return{ 0 };
}

THREADENTRY32 GetThreadInfoById(int thread_id) {
	THREADENTRY32 entry;
	memset(&entry, 0, sizeof(THREADENTRY32));
	entry.dwSize = sizeof(THREADENTRY32);

	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, NULL);

	if (Thread32First(snapshot, &entry)) {
		do {
			if (entry.th32ThreadID == thread_id) {
				CloseHandle(snapshot);
				return entry;
			}
		} while (Thread32Next(snapshot, &entry));
	}

	CloseHandle(snapshot);
	return{ 0 };
}

void SuspendProcess(int process_id) {
	THREADENTRY32 entry;
	memset(&entry, 0, sizeof(THREADENTRY32));
	entry.dwSize = sizeof(THREADENTRY32);

	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, NULL);

	if (Thread32First(snapshot, &entry)) {
		do {
			if (entry.th32OwnerProcessID == process_id) {
				HANDLE thread = OpenThread(THREAD_ALL_ACCESS, 0, entry.th32ThreadID);
				SuspendThread(thread);
				CloseHandle(thread);
			}
		} while (Thread32Next(snapshot, &entry));
	}

	CloseHandle(snapshot);
}

void ResumeProcess(int process_id) {
	THREADENTRY32 entry;
	memset(&entry, 0, sizeof(THREADENTRY32));
	entry.dwSize = sizeof(THREADENTRY32);

	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, NULL);

	if (Thread32First(snapshot, &entry)) {
		do {
			if (entry.th32OwnerProcessID == process_id) {
				HANDLE thread = OpenThread(THREAD_ALL_ACCESS, 0, entry.th32ThreadID);
				ResumeThread(thread);
				CloseHandle(thread);
			}
		} while (Thread32Next(snapshot, &entry));
	}

	CloseHandle(snapshot);
}

ULARGE_INTEGER GetThreadCreationTime(HANDLE thread) {
	FILETIME filetime, idle;

	GetThreadTimes(thread, &filetime, &idle, &idle, &idle);

	ULARGE_INTEGER time;
	time.LowPart = filetime.dwLowDateTime;
	time.HighPart = filetime.dwHighDateTime;

	return time;
}

int _thread_compare(const void *a, const void *b) {
	HANDLE thread_a = *(HANDLE *)a;
	HANDLE thread_b = *(HANDLE *)b;

	long long diff = GetThreadCreationTime(thread_a).QuadPart - GetThreadCreationTime(thread_b).QuadPart;

	return diff == 0 ? 0 : diff < 0 ? -1 : 1;
}

THREADENTRY32 GetThreadInfoByNumber(int process_id, int number) {
	ARRAY threads = ArrayNew(sizeof(HANDLE));

	THREADENTRY32 entry;
	memset(&entry, 0, sizeof(THREADENTRY32));
	entry.dwSize = sizeof(THREADENTRY32);

	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, process_id);

	if (Thread32First(snapshot, &entry)) {
		do {
			if (entry.th32OwnerProcessID == process_id) {
				HANDLE thread = OpenThread(THREAD_ALL_ACCESS, 0, entry.th32ThreadID);
				ArrayPush(&threads, &thread);
			}
		} while (Thread32Next(snapshot, &entry));
	}

	CloseHandle(snapshot);

	qsort(threads.buffer, threads.length, threads.element_size, _thread_compare);

	THREADENTRY32 thread_info = GetThreadInfoById(GetThreadId(*(HANDLE *)ArrayGet(&threads, number)));

	for (unsigned int i = 0; i < threads.length; i++) {
		CloseHandle(*(HANDLE *)ArrayGet(&threads, i));
	}

	ArrayFree(&threads);

	return thread_info;
}

void *GetThreadStackTop(int thread_id) {
	HANDLE thread = OpenThread(THREAD_ALL_ACCESS, 0, thread_id);
	HANDLE process = OpenProcess(PROCESS_ALL_ACCESS, 0, GetThreadInfoById(thread_id).th32OwnerProcessID);

	SuspendThread(thread);

	CONTEXT context;
	memset(&context, 0, sizeof(CONTEXT));
	context.ContextFlags = CONTEXT_SEGMENTS;

	if (GetThreadContext(thread, &context)) {
		LDT_ENTRY entry;
		if (GetThreadSelectorEntry(thread, context.SegFs, &entry)) {
			int stack = entry.BaseLow + (entry.HighWord.Bytes.BaseMid << 16) + (entry.HighWord.Bytes.BaseHi << 24);

			ReadProcessMemory(process, (void *)(stack + sizeof(int)), &stack, sizeof(int), NULL);

			ResumeThread(thread);
			CloseHandle(thread);
			CloseHandle(process);
			return (void *)stack;
		}
	}

	ResumeThread(thread);
	CloseHandle(thread);
	CloseHandle(process);
	return NULL;
}

void *GetThreadStack(int thread_id) {
	unsigned int top = (unsigned int)GetThreadStackTop(thread_id);
	if (!top) {
		return NULL;
	}

	unsigned int process_id = GetThreadInfoById(thread_id).th32OwnerProcessID;
	MODULEENTRY32 kernel32 = GetModuleInfoByName(process_id, TEXT("kernel32.dll"));
	if (!(unsigned int)kernel32.hModule) {
		return NULL;
	}

	unsigned int min = (unsigned int)kernel32.modBaseAddr;
	unsigned int max = min + kernel32.modBaseSize;

	HANDLE process = OpenProcess(PROCESS_ALL_ACCESS, 0, process_id);

	unsigned int stack = 0;
	for (;; top -= 4, stack = 0) {
		if (!ReadProcessMemory(process, (void *)top, &stack, sizeof(stack), NULL)) {
			break;
		}

		if (stack >= min && stack < max) {
			CloseHandle(process);
			return (void *)top;
		}
	}

	CloseHandle(process);
	return NULL;
}

unsigned int GetProcessThreadCount(int process_id) {
	THREADENTRY32 entry;
	memset(&entry, 0, sizeof(THREADENTRY32));
	entry.dwSize = sizeof(THREADENTRY32);

	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, NULL);

	unsigned int count = 0;
	if (Thread32First(snapshot, &entry)) {
		do {
			if (entry.th32OwnerProcessID == process_id) {
				count++;
			}
		} while (Thread32Next(snapshot, &entry));
	}

	CloseHandle(snapshot);
	return count;
}

int WriteBuffer(HANDLE process, void *address, char *buffer, unsigned int size) {
	WriteProcessMemory(process, address, buffer, size, (SIZE_T *)&size);
	return size;
}

int WriteChar(HANDLE process, void *address, char char_) {
	return WriteBuffer(process, address, &char_, sizeof(char));
}

int WriteShort(HANDLE process, void *address, short short_) {
	return WriteBuffer(process, address, (char *)&short_, sizeof(short));
}

int WriteInt(HANDLE process, void *address, int int_) {
	return WriteBuffer(process, address, (char *)&int_, sizeof(int));
}

int WriteFloat(HANDLE process, void *address, float float_) {
	return WriteBuffer(process, address, (char *)&float_, sizeof(float));
}

int WriteLong(HANDLE process, void *address, double long_) {
	return WriteBuffer(process, address, (char *)&long_, sizeof(long));
}

int WriteDouble(HANDLE process, void *address, double double_) {
	return WriteBuffer(process, address, (char *)&double_, sizeof(double));
}

int WriteLongLong(HANDLE process, void *address, long long longlong_) {
	return WriteBuffer(process, address, (char *)&longlong_, sizeof(long long));
}

int ReadBuffer(HANDLE process, void *address, char *buffer, unsigned int size) {
	ReadProcessMemory(process, address, buffer, size, (SIZE_T *)&size);
	return size;
}

char ReadChar(HANDLE process, void *address) {
	ReadBuffer(process, address, (char *)&address, sizeof(char));
	return CHAR(address);
}

short ReadShort(HANDLE process, void *address) {
	ReadBuffer(process, address, (char *)&address, sizeof(short));
	return SHORT(address);
}

int ReadInt(HANDLE process, void *address) {
	ReadBuffer(process, address, (char *)&address, sizeof(int));
	return INT(address);
}

float ReadFloat(HANDLE process, void *address) {
	ReadBuffer(process, address, (char *)&address, sizeof(float));
	return FLOAT(address);
}

long ReadLong(HANDLE process, void *address) {
	ReadBuffer(process, address, (char *)&address, sizeof(long));
	return LONG(address);
}

double ReadDouble(HANDLE process, void *address) {
	ReadBuffer(process, address, (char *)&address, sizeof(double));
	return DOUBLE(address);
}

long long ReadLongLong(HANDLE process, void *address) {
	ReadBuffer(process, address, (char *)&address, sizeof(long long));
	return LONGLONG(address);
}

void *GetPointer(HANDLE process, unsigned int offset_count, ...) {
	va_list offsets;
	va_start(offsets, offset_count);

	void *base = 0;
	for (unsigned int i = 0; i < offset_count - 1; i++) {
		ReadProcessMemory(process, (void *)((int)base + va_arg(offsets, int)), &base, sizeof(void *), NULL);
	}

	base = (void *)((int)base + va_arg(offsets, int));

	va_end(offsets);

	return base;
}

unsigned int Disassemble(unsigned char *bytes, unsigned int max, int offset, char *output) {
	static char register_mnemonics8[][0xF] = { "al", "cl", "dl", "bl", "ah", "ch", "dh", "bh" };
	static char register_mnemonics16[][0xF] = { "ax", "cx", "dx", "bx", "ax", "cx", "dx", "bx" };
	static char	register_mnemonics32[][0xF] = { "eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi" };

	static char sib_base_mnemonics[][0xF] = { "[eax", "[ecx", "[edx", "[ebx", "[esp", "[ebp", "[esi", "[edi" };
	static char sib_scale_mnemonics[][0xF] = { "*1", "*2", "*4", "*8" };

	enum {
		AL, EAX, ES, CS, SS, DS, ONE, CL, XMM0, BND0, BAD, MM0,
		IMM8, IMM16, IMM32, REL8, REL32, PTR1632, R, RM,
		BYTE, WORD, DWORD, QWORD, FWORD, XMMWORD
	};

	typedef struct {
		char hasModRM, size;
		char mnemonic[0xFF];
		char argument_count;
		char arguments[4];
	} INSTRUCTION;

	static INSTRUCTION standard_instructions[] = {
		{ 1, BYTE, "add ", 2, RM, R }, // 0
		{ 1, DWORD, "add ", 2, RM, R }, // 1
		{ 1, BYTE, "add ", 2, R, RM }, // 2
		{ 1, DWORD, "add ", 2, R, RM }, // 3
		{ 0, 0, "add ", 2, AL, IMM8 }, // 4
		{ 0, 0, "add ", 2, EAX, IMM32 }, // 5
		{ 0, 0, "push es", 0 }, // 6
		{ 0, 0, "pop es", 0 }, // 7
		{ 1, BYTE, "or ", 2, RM, R }, // 8
		{ 1, DWORD, "or ", 2, RM, R }, // 9
		{ 1, BYTE, "or ", 2, R, RM }, // A
		{ 1, DWORD, "or ", 2, R, RM }, // B
		{ 0, 0, "or ", 2, AL, IMM8 }, // C
		{ 0, 0, "or ", 2, EAX, IMM32 }, // D
		{ 0, 0, "push cs", 0 }, // E
		{ 0 }, // F - Two-byte instructions
		{ 1, BYTE, "adc ", 2, RM, R }, // 10
		{ 1, DWORD, "adc ", 2, RM, R }, // 11
		{ 1, BYTE, "adc ", 2, R, RM }, // 12
		{ 1, DWORD, "adc ", 2, R, RM }, // 13
		{ 0, 0, "adc ", 2, AL, IMM8 }, // 14
		{ 0, 0, "adc ", 2, EAX, IMM32 }, // 15
		{ 0, 0, "push ss", 0 }, // 16
		{ 0, 0, "pop ss", 0 }, // 17
		{ 1, BYTE, "sbb ", 2, RM, R }, // 18
		{ 1, DWORD, "sbb ", 2, RM, R }, // 19
		{ 1, BYTE, "sbb ", 2, R, RM }, // 1A
		{ 1, DWORD, "sbb ", 2, R, RM }, // 1B
		{ 0, 0, "sbb ", 2, AL, IMM8 }, // 1C
		{ 0, 0, "sbb ", 2, EAX, IMM32 }, // 1D
		{ 0, 0, "push ds", 0 }, // 1E
		{ 0, 0, "pop ds", 0 }, // 1F
		{ 1, BYTE, "and ", 2, RM, R }, // 20
		{ 1, DWORD, "and ", 2, RM, R }, // 21
		{ 1, BYTE, "and ", 2, R, RM }, // 22
		{ 1, DWORD, "and ", 2, R, RM }, // 23
		{ 0, 0, "and ", 2, AL, IMM8 }, // 24
		{ 0, 0, "and ", 2, EAX, IMM32 }, // 25
		{ 0, 0, "es ", 0 }, // 26
		{ 0, 0, "daa ", 0 }, // 27
		{ 1, BYTE, "sub ", 2, RM, R }, // 28
		{ 1, DWORD, "sub ", 2, RM, R }, // 29
		{ 1, BYTE, "sub ", 2, R, RM }, // 2A
		{ 1, DWORD, "sub ", 2, R, RM }, // 2B
		{ 0, 0, "sub ", 2, AL, IMM8 }, // 2C
		{ 0, 0, "sub ", 2, EAX, IMM32 }, // 2D
		{ 0, 0, "cs ", 0 }, // 2E
		{ 0, 0, "das ", 0 }, // 2F
		{ 1, BYTE, "xor ", 2, RM, R }, // 30
		{ 1, DWORD, "xor ", 2, RM, R }, // 31
		{ 1, BYTE, "xor ", 2, R, RM }, // 32
		{ 1, DWORD, "xor ", 2, R, RM }, // 33
		{ 0, 0, "xor ", 2, AL, IMM8 }, // 34
		{ 0, 0, "xor ", 2, EAX, IMM32 }, // 35
		{ 0, 0, "ss ", 0 }, // 36
		{ 0, 0, "aaa ", 0 }, // 37
		{ 1, BYTE, "cmp ", 2, RM, R }, // 38
		{ 1, DWORD, "cmp ", 2, RM, R }, // 39
		{ 1, BYTE, "cmp ", 2, R, RM }, // 3A
		{ 1, DWORD, "cmp ", 2, R, RM }, // 3B
		{ 0, 0, "cmp ", 2, AL, IMM8 }, // 3C
		{ 0, 0, "cmp ", 2, EAX, IMM32 }, // 3D
		{ 0, 0, "ds ", 0 }, // 3E
		{ 0, 0, "aas ", 0 }, // 3F
		{ 0, 0, "inc eax", 0 }, // 40
		{ 0, 0, "inc ecx", 0 }, // 41
		{ 0, 0, "inc edx", 0 }, // 42
		{ 0, 0, "inc ebx", 0 }, // 43
		{ 0, 0, "inc esp", 0 }, // 44
		{ 0, 0, "inc ebp", 0 }, // 45
		{ 0, 0, "inc esi", 0 }, // 46
		{ 0, 0, "inc edi", 0 }, // 47
		{ 0, 0, "dec eax", 0 }, // 48
		{ 0, 0, "dec ecx", 0 }, // 49
		{ 0, 0, "dec edx", 0 }, // 4A
		{ 0, 0, "dec ebx", 0 }, // 4B
		{ 0, 0, "dec esp", 0 }, // 4C
		{ 0, 0, "dec ebp", 0 }, // 4D
		{ 0, 0, "dec esi", 0 }, // 4E
		{ 0, 0, "dec edi", 0 }, // 4F
		{ 0, 0, "push eax", 0 }, // 50
		{ 0, 0, "push ecx", 0 }, // 51
		{ 0, 0, "push edx", 0 }, // 52
		{ 0, 0, "push ebx", 0 }, // 53
		{ 0, 0, "push esp", 0 }, // 54
		{ 0, 0, "push ebp", 0 }, // 55
		{ 0, 0, "push esi", 0 }, // 56
		{ 0, 0, "push edi", 0 }, // 57
		{ 0, 0, "pop eax", 0 }, // 58
		{ 0, 0, "pop ecx", 0 }, // 59
		{ 0, 0, "pop edx", 0 }, // 5A
		{ 0, 0, "pop ebx", 0 }, // 5B
		{ 0, 0, "pop esp", 0 }, // 5C
		{ 0, 0, "pop ebp", 0 }, // 5D
		{ 0, 0, "pop esi", 0 }, // 5E
		{ 0, 0, "pop edi", 0 }, // 5F
		{ 0, 0, "pusha", 0 }, // 60
		{ 0, 0, "popa", 0 }, // 61
		{ 1, QWORD, "bound ", 2, R, RM }, // 62
		{ 1, WORD, "arpl ", 2, RM, R }, // 63
		{ 0, 0, "fs ", 0 }, // 64
		{ 0, 0, "gs ", 0 }, // 65
		{ 0, 0, "data16 ", 0 }, // 66
		{ 0, 0, "addr16 ", 0 }, // 67
		{ 0, 0, "push ", 1, IMM32 }, // 68
		{ 1, DWORD, "imul ", 3, R, RM, IMM32 }, // 69
		{ 0, 0, "push ", 1, IMM8 }, // 6A
		{ 1, DWORD, "imul ", 3, R, RM, IMM8 }, // 6B
		{ 0, 0, "ins BYTE PTR es:[edi],dx", 0 }, // 6C
		{ 0, 0, "ins DWORD PTR es:[edi],dx", 0 }, // 6D
		{ 0, 0, "outs dx,BYTE PTR ds:[esi]", 0 }, // 6E
		{ 0, 0, "outs dx,DWORD PTR ds:[esi]", 0 }, // 6F
		{ 0, 0, "jo ", 1, REL8 }, // 70
		{ 0, 0, "jno ", 1, REL8 }, // 71
		{ 0, 0, "jb ", 1, REL8 }, // 72
		{ 0, 0, "jnb ", 1, REL8 }, // 73
		{ 0, 0, "jz ", 1, REL8 }, // 74
		{ 0, 0, "jne ", 1, REL8 }, // 75
		{ 0, 0, "jbe ", 1, REL8 }, // 76
		{ 0, 0, "ja ", 1, REL8 }, // 77
		{ 0, 0, "js ", 1, REL8 }, // 78
		{ 0, 0, "jns ", 1, REL8 }, // 79
		{ 0, 0, "jp ", 1, REL8 }, // 7A
		{ 0, 0, "jnp ", 1, REL8 }, // 7B
		{ 0, 0, "jl ", 1, REL8 }, // 7C
		{ 0, 0, "jnl ", 1, REL8 }, // 7D
		{ 0, 0, "jle ", 1, REL8 }, // 7E
		{ 0, 0, "jnle ", 1, REL8 }, // 7F
		{ 1, BYTE, "add ", 2, RM, IMM8 }, // 80
		{ 1, DWORD, "add ", 2, RM, IMM32 }, // 81
		{ 0, 0, ".byte 0x82", 0 }, // 82
		{ 1, DWORD, "adc ", 2, RM, IMM8 }, // 83
		{ 1, BYTE, "test ", 2, RM, R }, // 84
		{ 1, DWORD, "test ", 2, RM, R }, // 85
		{ 1, BYTE, "xchg ", 2, RM, R }, // 86
		{ 1, DWORD, "xchg ", 2, RM, R }, // 87
		{ 1, BYTE, "mov ", 2, RM, R }, // 88
		{ 1, DWORD, "mov ", 2, RM, R }, // 89
		{ 1, BYTE, "mov ", 2, R, RM }, // 8A
		{ 1, DWORD, "mov ", 2, R, RM }, // 8B
		{ 1, WORD, "mov ", 2, RM, SS }, // 8C
		{ 1, 0, "lea ", 2, R, RM }, // 8D
		{ 1, WORD, "mov ss,", 1, RM }, // 8E
		{ 1, DWORD, "pop ", 1, RM }, // 8F
		{ 0, 0, "nop", 0 }, // 90
		{ 0, 0, "xchg ecx,eax", 0 }, // 91
		{ 0, 0, "xchg edx,eax", 0 }, // 92
		{ 0, 0, "xchg ebx,eax", 0 }, // 93
		{ 0, 0, "xchg esp,eax", 0 }, // 94
		{ 0, 0, "xchg ebp,eax", 0 }, // 95
		{ 0, 0, "xchg esi,eax", 0 }, // 96
		{ 0, 0, "xchg edi,eax", 0 }, // 97
		{ 0, 0, "cwde", 0 }, // 98
		{ 0, 0, "cdq", 0 }, // 99
		{ 0, 0, "call ", 1, PTR1632 }, // 9A
		{ 0, 0, "fwait", 0 }, // 9B
		{ 0, 0, "pushf", 0 }, // 9C
		{ 0, 0, "popf", 0 }, // 9D
		{ 0, 0, "sahf", 0 }, // 9E
		{ 0, 0, "lahf", 0 }, // 9F
		{ 0, 0, "mov al,ds:", 1, IMM8 }, // A0
		{ 0, 0, "mov eax,ds:", 1, IMM8 }, // A1
		{ 0, 0, "mov ds:", 2, IMM8, AL }, // A2
		{ 0, 0, "mov ds:", 2, IMM32, EAX }, // A3
		{ 0, 0, "movs BYTE PTR es:[edi],BYTE PTR ds:[esi]", 0 }, // A4
		{ 0, 0, "movs DWORD PTR es:[edi],DWORD PTR ds:[esi]", 0 }, // A5
		{ 0, 0, "cmps BYTE PTR es:[esi],BYTE PTR ds:[edi]", 0 }, // A6
		{ 0, 0, "cmps DWORD PTR es:[esi],DWORD PTR ds:[edi]", 0 }, // A7
		{ 0, 0, "test al,", 1, IMM8 }, // A8
		{ 0, 0, "test eax,", 1, IMM32 }, // A9
		{ 0, 0, "stos BYTE PTR es:[edi],al", 0 }, // AA
		{ 0, 0, "stos DWORD PTR es:[edi],eax", 0 }, // AB
		{ 0, 0, "lods al,BYTE PTR ds:[esi]", 0 }, // AC
		{ 0, 0, "lods eax,DWORD PTR ds:[esi]", 0 }, // AD
		{ 0, 0, "scas al,BYTE PTR es:[edi]", 0 }, // AE
		{ 0, 0, "scas eax,DWORD PTR es:[edi]", 0 }, // AF
		{ 0, 0, "mov al,", 1, IMM8 }, // B0
		{ 0, 0, "mov cl,", 1, IMM8 }, // B1
		{ 0, 0, "mov dl,", 1, IMM8 }, // B2
		{ 0, 0, "mov bl,", 1, IMM8 }, // B3
		{ 0, 0, "mov ah,", 1, IMM8 }, // B4
		{ 0, 0, "mov ch,", 1, IMM8 }, // B5
		{ 0, 0, "mov dh,", 1, IMM8 }, // B6
		{ 0, 0, "mov bh,", 1, IMM8 }, // B7
		{ 0, 0, "mov eax,", 1, IMM32 }, // B8
		{ 0, 0, "mov ecx,", 1, IMM32 }, // B9
		{ 0, 0, "mov edx,", 1, IMM32 }, // BA
		{ 0, 0, "mov ebx,", 1, IMM32 }, // BB
		{ 0, 0, "mov esp,", 1, IMM32 }, // BC
		{ 0, 0, "mov ebp,", 1, IMM32 }, // BD
		{ 0, 0, "mov esi,", 1, IMM32 }, // BE
		{ 0, 0, "mov edi,", 1, IMM32 }, // BF
		{ 1, BYTE, "rol ", 2, RM, IMM8 }, // C0
		{ 1, DWORD, "rol ", 2, RM, IMM8 }, // C1
		{ 0, 0, "ret ", 1, IMM16 }, // C2
		{ 0, 0, "ret", 0 }, // C3
		{ 1, FWORD, "les eax,", 1, RM }, // C4
		{ 1, FWORD, "lds eax,", 1, RM }, // C5
		{ 1, BYTE, "mov ", 2, RM, IMM8 }, // C6
		{ 1, DWORD, "mov ", 2, RM, IMM32 }, // C7
		{ 0, 0, "enter ", 2, IMM16, IMM8 }, // C8
		{ 0, 0, "leave", 0 }, // C9
		{ 0, 0, "retf ", 1, IMM16 }, // CA
		{ 0, 0, "retf", 0 }, // CB
		{ 0, 0, "int3", 0 }, // CC
		{ 0, 0, "int ", 1, IMM8 }, // CD
		{ 0, 0, "into", 0 }, // CE
		{ 0, 0, "iret", 0 }, // CF
		{ 1, BYTE, "rol ", 2, RM, ONE }, // D0
		{ 1, DWORD, "rol ", 2, RM, ONE }, // D1
		{ 1, BYTE, "rol ", 2, RM, CL }, // D2
		{ 1, DWORD, "rol ", 2, RM, CL }, // D3
		{ 0, 0, "aam ", 1, IMM8 }, // D4
		{ 0, 0, "aad ", 1, IMM8 }, // D5
		{ 0, 0, ".byte 0xd6", 0 }, // D6
		{ 0, 0, "xlat BYTE PTR ds:[ebx]", 0 }, // D7
		{ 1, DWORD, "fadd ", 1, RM }, // D8
		{ 1, DWORD, "fld ", 1, RM }, // D9
		{ 1, DWORD, "fiadd ", 1, RM }, // DA
		{ 1, DWORD, "fild ", 1, RM }, // DB
		{ 1, QWORD, "fadd ", 1, RM }, // DC
		{ 1, QWORD, "fld ", 1, RM }, // DD
		{ 1, WORD, "fiadd ", 1, RM }, // DE
		{ 1, WORD, "fild ", 1, RM }, // DF
		{ 0, 0, "loopne ", 1, REL8 }, // E0
		{ 0, 0, "loope ", 1, REL8 }, // E1
		{ 0, 0, "loop ", 1, REL8 }, // E2
		{ 0, 0, "jecxz ", 1, REL8 }, // E3
		{ 0, 0, "in al,", 1, IMM8 }, // E4
		{ 0, 0, "in eax,", 1, IMM8 }, // E5
		{ 0, 0, "out ", 2, IMM8, AL }, // E6
		{ 0, 0, "out ", 2, IMM8, EAX }, // E7
		{ 0, 0, "call ", 1, REL32 }, // E8
		{ 0, 0, "jmp ", 1, REL32 }, // E9
		{ 0, 0, "jmpf ", 1, PTR1632 }, // EA
		{ 0, 0, "jmp ", 1, REL8 }, // EB
		{ 0, 0, "in al,dx", 0 }, // EC
		{ 0, 0, "in eax,dx", 0 }, // ED
		{ 0, 0, "out dx,al", 0 }, // EE
		{ 0, 0, "out dx,eax", 0 }, // EF
		{ 0, 0, "lock ", 0 }, // F0
		{ 0, 0, "icebp", 0 }, // F1
		{ 0, 0, "repnz ", 0 }, // F2
		{ 0, 0, "repz", 0 }, // F3
		{ 0, 0, "hlt", 0 }, // F4
		{ 0, 0, "cmc", 0 }, // F5
		{ 1, BYTE, "test ", 2, RM, IMM8 }, // F6
		{ 1, DWORD, "test ", 2, RM, IMM32 }, // F7
		{ 0, 0, "clc", 0 }, // F8
		{ 0, 0, "stc", 0 }, // F9
		{ 0, 0, "cli", 0 }, // FA
		{ 0, 0, "sti", 0 }, // FB
		{ 0, 0, "cld", 0 }, // FC
		{ 0, 0, "std", 0 }, // FD
		{ 1, BYTE, "inc ", 1, RM }, // FE
		{ 1, DWORD, "inc ", 1, RM } // FF
	};

	static INSTRUCTION extended_instructions[] = {
		{ 1, WORD, "sldt ", 1, RM }, // 0
		{ 1, 0, "sgdtd ", 1, RM }, // 1
		{ 1, 0, "lar eax,WORD PTR ", 1, RM }, // 2
		{ 1, 0, "lsl eax,WORD PTR ", 1, RM }, // 3
		{ 0, 0, ".word 0x0f04", 0 }, // 4
		{ 0, 0, "syscall", 0 }, // 5
		{ 0, 0, "clts", 0 }, // 6
		{ 0, 0, "sysret", 0 }, // 7
		{ 0, 0, "invd", 0 }, // 8
		{ 0, 0, "wbinvd", 0 }, // 9
		{ 0, 0, ".word 0x0f0a", 0 }, // A
		{ 0, 0, "ud2", 0 }, // B
		{ 0, 0, ".word 0x0f0c", 0 }, // C
		{ 1, BYTE, "prefetch ", 1, RM }, // D
		{ 0, 0, "femms", 0 }, // E
		{ 0 }, // F - Illegal
		{ 1, XMMWORD, "movups xmm0,", 1, RM }, // 10
		{ 1, XMMWORD, "movups ", 2, RM, XMM0 }, // 11
		{ 1, QWORD, "movlps xmm0,", 1, RM }, // 12
		{ 1, QWORD, "movlps ", 2, RM, XMM0 }, // 13
		{ 1, XMMWORD, "unpcklps xmm0,", 1, RM }, // 14
		{ 1, XMMWORD, "unpckhps xmm0,", 1, RM }, // 15
		{ 1, QWORD, "movhps xmm0,", 1, RM }, // 16
		{ 1, QWORD, "movhps ", 2, RM, XMM0 }, // 17
		{ 1, BYTE, "prefetchnta ", 1, RM }, // 18
		{ 1, DWORD, "nop ", 1, RM }, // 19
		{ 1, 0, "bndldx bnd0,", 1, RM }, // 1A
		{ 1, 0, "bndstx ", 2, RM, BND0 }, // 1B
		{ 1, DWORD, "nop ", 1, RM }, // 1C
		{ 1, DWORD, "nop ", 1, RM }, // 1D
		{ 1, DWORD, "nop ", 1, RM }, // 1E
		{ 1, DWORD, "nop ", 1, RM }, // 1F
		{ 0, 0, ".word 0x0f20", 0 }, // 20
		{ 0, 0, ".word 0x0f21", 0 }, // 21
		{ 0, 0, ".word 0x0f22", 0 }, // 22
		{ 0, 0, ".word 0x0f23", 0 }, // 23
		{ 0, 0, ".word 0x0f24", 0 }, // 24
		{ 0, 0, ".word 0x0f25", 0 }, // 25
		{ 0, 0, ".word 0x0f26", 0 }, // 26
		{ 0, 0, ".word 0x0f27", 0 }, // 27
		{ 1, XMMWORD, "movaps xmm0,", 1, RM }, // 28
		{ 1, XMMWORD, "movaps ", 2, RM, XMM0 }, // 29
		{ 1, QWORD, "cvtpi2ps xmm0,", 1, RM }, // 2A
		{ 1, XMMWORD, "movntps ", 2, RM, XMM0 }, // 2B
		{ 1, QWORD, "cvttps2pi mm0,", 1, RM }, // 2C
		{ 1, QWORD, "cvtps2pi mm0,", 1, RM }, // 2D
		{ 1, DWORD, "ucomiss xmm0,", 1, RM }, // 2E
		{ 1, DWORD, "comiss xmm0,", 1, RM }, // 2F
		{ 0, 0, "wrmsr", 0 }, // 30
		{ 0, 0, "rdtsc", 0 }, // 31
		{ 0, 0, "rdmsr", 0 }, // 32
		{ 0, 0, "rdpmc", 0 }, // 33
		{ 0, 0, "sysenter", 0 }, // 34
		{ 0, 0, "sysexit", 0 }, // 35
		{ 0, 0, ".word 0x0f36", 0 }, // 36
		{ 0, 0, "getsec", 0 }, // 37
		{ 1, QWORD, "pshufb mm0,", 1, RM }, // 38
		{ 0, 0, ".word 0x0f39", 0 }, // 39
		{ 0, 0, "(bad)", 1, BAD }, // 3A
		{ 0, 0, ".word 0x0f3b", 0 }, // 3B
		{ 0, 0, ".word 0x0f3c", 0 }, // 3C
		{ 0, 0, ".word 0x0f3d", 0 }, // 3D
		{ 0, 0, ".word 0x0f3e", 0 }, // 3E
		{ 0, 0, ".word 0x0f3f", 0 }, // 3F
		{ 1, DWORD, "cmovo ", 2, R, RM }, // 40
		{ 1, DWORD, "cmovno ", 2, R, RM }, // 41
		{ 1, DWORD, "cmovb ", 2, R, RM }, // 42
		{ 1, DWORD, "cmovae ", 2, R, RM }, // 43
		{ 1, DWORD, "cmove ", 2, R, RM }, // 44
		{ 1, DWORD, "cmovne ", 2, R, RM }, // 45
		{ 1, DWORD, "cmovbe ", 2, R, RM }, // 46
		{ 1, DWORD, "cmova ", 2, R, RM }, // 47
		{ 1, DWORD, "cmovs ", 2, R, RM }, // 48
		{ 1, DWORD, "cmovns ", 2, R, RM }, // 49
		{ 1, DWORD, "cmovp ", 2, R, RM }, // 4A
		{ 1, DWORD, "cmovnp ", 2, R, RM }, // 4B
		{ 1, DWORD, "cmovl ", 2, R, RM }, // 4C
		{ 1, DWORD, "cmovge ", 2, R, RM }, // 4D
		{ 1, DWORD, "cmovle ", 2, R, RM }, // 4E
		{ 1, DWORD, "cmovg ", 2, R, RM }, // 4F
		{ 0, 0, ".word 0x0f50", 0 }, // 50
		{ 1, XMMWORD, "sqrtps xmm0,", 1, RM }, // 51
		{ 1, XMMWORD, "rsqrtps xmm0,", 1, RM }, // 52
		{ 1, XMMWORD, "rcpps xmm0,", 1, RM }, // 53
		{ 1, XMMWORD, "andps xmm0,", 1, RM }, // 54
		{ 1, XMMWORD, "andnps xmm0,", 1, RM }, // 55
		{ 1, XMMWORD, "orps xmm0,", 1, RM }, // 56
		{ 1, XMMWORD, "xorps xmm0,", 1, RM }, // 57
		{ 1, XMMWORD, "addps xmm0,", 1, RM }, // 58
		{ 1, XMMWORD, "mulps xmm0,", 1, RM }, // 59
		{ 1, QWORD, "cvtps2pd xmm0,", 1, RM }, // 5A
		{ 1, XMMWORD, "cvtdp2ps xmm0,", 1, RM }, // 5B
		{ 1, XMMWORD, "subps xmm0,", 1, RM }, // 5C
		{ 1, XMMWORD, "minps xmm0,", 1, RM }, // 5D
		{ 1, XMMWORD, "divps xmm0,", 1, RM }, // 5E
		{ 1, XMMWORD, "maxps xmm0,", 1, RM }, // 5F
		{ 1, DWORD, "punpcklbw mm0,", 1, RM }, // 60
		{ 1, DWORD, "punpcklwd mm0,", 1, RM }, // 61
		{ 1, DWORD, "punpckldq mm0,", 1, RM }, // 62
		{ 1, QWORD, "packsswb mm0,", 1, RM }, // 63
		{ 1, QWORD, "pcmpgtb mm0,", 1, RM }, // 64
		{ 1, QWORD, "pcmpgtw mm0,", 1, RM }, // 65
		{ 1, QWORD, "pcmpgtd mm0,", 1, RM }, // 66
		{ 1, QWORD, "packuswb mm0,", 1, RM }, // 67
		{ 1, QWORD, "punpckhbw mm0,", 1, RM }, // 68
		{ 1, QWORD, "punpckhwd mm0,", 1, RM }, // 69
		{ 1, QWORD, "punpckhdq mm0,", 1, RM }, // 6A
		{ 1, QWORD, "packssdw mm0,", 1, RM }, // 6B
		{ 0, 0, ".word 0x0f6c", 0 }, // 6C
		{ 0, 0, ".word 0x0f6d", 0 }, // 6D
		{ 1, DWORD, "movd mm0,", 1, RM }, // 6E
		{ 1, QWORD, "movq mm0,", 1, RM }, // 6F
		{ 1, QWORD, "pshufw mm0,", 2, RM, IMM8 }, // 70
		{ 0, 0, ".word 0x0f71", 0 }, // 71
		{ 0, 0, ".word 0x0f72", 0 }, // 72
		{ 0, 0, ".word 0x0f73", 0 }, // 73
		{ 1, QWORD, "pcmpeqb mm0,", 1, RM }, // 74
		{ 1, QWORD, "pcmpeqw mm0,", 1, RM }, // 75
		{ 1, QWORD, "pcmpeqd mm0,", 1, RM }, // 76
		{ 0, 0, "emms", 0 }, // 77
		{ 1, DWORD, "vmread ", 2, RM, R }, // 78
		{ 1, DWORD, "vmwrite ", 2, R, RM }, // 79
		{ 0, 0, "(bad)", 1, BAD }, // 7A
		{ 0, 0, ".word 0x0f7b", 0 }, // 7B
		{ 0, 0, ".word 0x0f7c", 0 }, // 7C
		{ 0, 0, ".word 0x0f7d", 0 }, // 7D
		{ 1, DWORD, "movd ", 2, RM, MM0 }, // 7E
		{ 1, QWORD, "movq ", 2, RM, MM0 }, // 7F
		{ 0, 0, "jo ", 1, REL32 }, // 80
		{ 0, 0, "jno ", 1, REL32 }, // 81
		{ 0, 0, "jb ", 1, REL32 }, // 82
		{ 0, 0, "jae ", 1, REL32 }, // 83
		{ 0, 0, "je ", 1, REL32 }, // 84
		{ 0, 0, "jne ", 1, REL32 }, // 85
		{ 0, 0, "jbe ", 1, REL32 }, // 86
		{ 0, 0, "ja ", 1, REL32 }, // 87
		{ 0, 0, "js ", 1, REL32 }, // 88
		{ 0, 0, "jns ", 1, REL32 }, // 89
		{ 0, 0, "jp ", 1, REL32 }, // 8A
		{ 0, 0, "jnp ", 1, REL32 }, // 8B
		{ 0, 0, "jl ", 1, REL32 }, // 8C
		{ 0, 0, "jge ", 1, REL32 }, // 8D
		{ 0, 0, "jle ", 1, REL32 }, // 8E
		{ 0, 0, "jg ", 1, REL32 }, // 8F
		{ 1, BYTE, "seto ", 1, RM }, // 90
		{ 1, BYTE, "setno ", 1, RM }, // 91
		{ 1, BYTE, "setb ", 1, RM }, // 92
		{ 1, BYTE, "setae ", 1, RM }, // 93
		{ 1, BYTE, "sete ", 1, RM }, // 94
		{ 1, BYTE, "setne ", 1, RM }, // 95
		{ 1, BYTE, "setbe ", 1, RM }, // 96
		{ 1, BYTE, "seta ", 1, RM }, // 97
		{ 1, BYTE, "sets ", 1, RM }, // 98
		{ 1, BYTE, "setns ", 1, RM }, // 99
		{ 1, BYTE, "setp ", 1, RM }, // 9A
		{ 1, BYTE, "setnp ", 1, RM }, // 9B
		{ 1, BYTE, "setl ", 1, RM }, // 9C
		{ 1, BYTE, "setge ", 1, RM }, // 9D
		{ 1, BYTE, "setle ", 1, RM }, // 9E
		{ 1, BYTE, "setg ", 1, RM }, // 9F
		{ 0, 0, "push fs", 0 }, // A0
		{ 0, 0, "pop fs", 0 }, // A1
		{ 0, 0, "cpuid", 0 }, // A2
		{ 1, DWORD, "bt ", 2, RM, R }, // A3
		{ 1, DWORD, "shld ", 3, RM, R, IMM8 }, // A4
		{ 1, DWORD, "shld ", 3, RM, R, CL }, // A5
		{ 0 }, // A6 - Illegal
		{ 0 }, // A7 - Illegal
		{ 0, 0, "push gs", 0 }, // A8
		{ 0, 0, "pop gs", 0 }, // A9
		{ 0, 0, "rsm", 0 }, // AA
		{ 1, DWORD, "bts ", 2, RM, R }, // AB
		{ 1, DWORD, "shrd ", 3, RM, R, IMM8 }, // AC
		{ 1, DWORD, "shrd ", 3, RM, R, CL }, // AD
		{ 1, 0, "fxsave ", 1, RM }, // AE
		{ 1, DWORD, "imul ", 2, R, RM }, // AF
		{ 1, BYTE, "cmpxchg ", 2, RM, AL }, // B0
		{ 1, DWORD, "cmpxchg ", 2, RM, R }, // B1
		{ 1, FWORD, "lss ", 2, R, RM }, // B2
		{ 1, DWORD, "btr ", 2, RM, R }, // B3
		{ 1, FWORD, "lfs ", 2, R, RM }, // B4
		{ 1, FWORD, "lgs ", 2, R, RM }, // B5
		{ 1, BYTE, "movzx ", 2, R, RM }, // B6
		{ 1, WORD, "movzx ", 2, R, RM }, // B7
		{ 0, 0, ".word 0x0fb8", 0 }, // B8
		{ 0, 0, "ud1", 0 }, // B9
		{ 0, 0, ".word 0x0fba", 0 }, // BA
		{ 1, DWORD, "btc ", 2, RM, R }, // BB
		{ 1, DWORD, "bsf ", 2, R, RM }, // BC
		{ 1, DWORD, "bsr ", 2, R, RM }, // BD
		{ 1, BYTE, "movsx ", 2, R, RM }, // BE
		{ 1, WORD, "movsx ", 2, R, RM }, // BF
		{ 1, BYTE, "xadd ", 2, RM, R }, // C0
		{ 1, DWORD, "xadd ", 2, RM, R }, // C1
		{ 1, XMMWORD, "cmpeqps xmm0,", 1, RM }, // C2
		{ 1, QWORD, "movnti ", 2, RM, R }, // C3
		{ 1, WORD, "pinsrw mm0,", 2, RM, IMM8 }, // C4
		{ 1, 0, "pextrw ", 3, R, MM0, IMM8 }, // C5
		{ 1, XMMWORD, "shufps xmm0,", 2, RM, IMM8 }, // C6
		{ 0, 0, ".word 0x0fc7", 0 }, // C7
		{ 0, 0, "bswap eax", 0 }, // C8
		{ 0, 0, "bswap ecx", 0 }, // C9
		{ 0, 0, "bswap edx", 0 }, // CA
		{ 0, 0, "bswap ebx", 0 }, // CB
		{ 0, 0, "bswap esp", 0 }, // CC
		{ 0, 0, "bswap ebp", 0 }, // CD
		{ 0, 0, "bswap esi", 0 }, // CE
		{ 0, 0, "bswap edi", 0 }, // CF
		{ 0, 0, ".word 0x0fd0", 0 }, // D0
		{ 1, QWORD, "psrlw mm0,", 1, RM }, // D1
		{ 1, QWORD, "psrld mm0,", 1, RM }, // D2
		{ 1, QWORD, "psrlq mm0,", 1, RM }, // D3
		{ 1, QWORD, "paddq mm0,", 1, RM }, // D4
		{ 1, QWORD, "pmullw mm0,", 1, RM }, // D5
		{ 0, 0, ".word 0x0fd6,", 0 }, // D6
		{ 0, 0, ".word 0x0fd7,", 0 }, // D7
		{ 1, QWORD, "psubusb mm0,", 1, RM }, // D8
		{ 1, QWORD, "psubusw mm0,", 1, RM }, // D9
		{ 1, QWORD, "pminub mm0,", 1, RM }, // DA
		{ 1, QWORD, "pand mm0,", 1, RM }, // DB
		{ 1, QWORD, "paddusb mm0,", 1, RM }, // DC
		{ 1, QWORD, "psubusw mm0,", 1, RM }, // DD
		{ 1, QWORD, "pmaxub mm0,", 1, RM }, // DE
		{ 1, QWORD, "pandn mm0,", 1, RM }, // DF
		{ 1, QWORD, "pavgb mm0,", 1, RM }, // E0
		{ 1, QWORD, "psraw mm0,", 1, RM }, // E1
		{ 1, QWORD, "psrad mm0,", 1, RM }, // E2
		{ 1, QWORD, "pavgw mm0,", 1, RM }, // E3
		{ 1, QWORD, "pmulhuw mm0,", 1, RM }, // E4
		{ 1, QWORD, "pmulhw mm0,", 1, RM }, // E5
		{ 0, 0, ".word 0x0fe6", 0 }, // E6
		{ 1, QWORD, "movntq ", 2, RM, MM0 }, // E7
		{ 1, QWORD, "psubsb mm0,", 1, RM }, // E8
		{ 1, QWORD, "psubsw mm0,", 1, RM }, // E9
		{ 1, QWORD, "pminsw mm0,", 1, RM }, // EA
		{ 1, QWORD, "por mm0,", 1, RM }, // EB
		{ 1, QWORD, "paddsb mm0,", 1, RM }, // EC
		{ 1, QWORD, "paddsw mm0,", 1, RM }, // ED
		{ 1, QWORD, "pmaxsw mm0,", 1, RM }, // EE
		{ 1, QWORD, "pxor mm0,", 1, RM }, // EF
		{ 0, 0, ".word 0x0ff0", 0 }, // F0
		{ 1, QWORD, "psllow mm0,", 1, RM }, // F1
		{ 1, QWORD, "pslld mm0,", 1, RM }, // F2
		{ 1, QWORD, "psllq mm0,", 1, RM }, // F3
		{ 1, QWORD, "pmuludq mm0,", 1, RM }, // F4
		{ 1, QWORD, "pmaddwd mm0,", 1, RM }, // F5
		{ 1, QWORD, "psadbw mm0,", 1, RM }, // F6
		{ 0 }, // F7 - Illegal
		{ 1, QWORD, "psubb mm0,", 1, RM }, // F8
		{ 1, QWORD, "psubw mm0,", 1, RM }, // F9
		{ 1, QWORD, "psubd mm0,", 1, RM }, // FA
		{ 1, QWORD, "psubq mm0,", 1, RM }, // FB
		{ 1, QWORD, "paddb mm0,", 1, RM }, // FC
		{ 1, QWORD, "paddw mm0,", 1, RM }, // FD
		{ 1, QWORD, "paddd mm0,", 1, RM }, // FE
		{ 0 }, // FF - Illegal
	};

	unsigned char *base = bytes;
	unsigned char opcode = *bytes++;

	INSTRUCTION *instructions = standard_instructions;
	if (opcode == 0x0F) { // Extended opcodes
		if (max < 2 || *bytes == 0x0F || *bytes == 0xA6 || *bytes == 0xA7 || *bytes == 0xF7 || *bytes == 0xFF) {
			goto ILLEGAL;
		}

		instructions = extended_instructions;
		opcode = *bytes++;
	}

	if (!instructions[opcode].hasModRM) {
		goto OUTPUT; // Skip ModRM byte parsing
	}

	char RM_output[0xFF];
	char R_output[0xFF];

	char modRM_mod = ((*bytes) >> 6) & 0b11; // Bits 7-6.
	char modRM_reg = ((*bytes) >> 3) & 0b111; // Bits 5-3.
	char modRM_rm = (*bytes++) & 0b111; // Bits 2-0.

	switch (instructions[opcode].size) {
		case WORD:
			strcpy(R_output, register_mnemonics16[modRM_reg]);
			break;
		case BYTE:
			strcpy(R_output, register_mnemonics8[modRM_reg]);
			break;
		default:
			strcpy(R_output, register_mnemonics32[modRM_reg]);
	}

	if (modRM_mod == 0b11) { // Register addressing mode.
		switch (instructions[opcode].size) {
			case BYTE:
				sprintf(RM_output, "%s", register_mnemonics8[modRM_rm]);
				break;
			case WORD:
				sprintf(RM_output, "%s", register_mnemonics16[modRM_rm]);
				break;
			default:
				sprintf(RM_output, "%s", register_mnemonics32[modRM_rm]);
		}
	} else if (modRM_mod == 0b00 && modRM_rm == 0b101) { // Displacement only addressing mode.
		sprintf(RM_output, "[0x%x]", *(int *)bytes);
		bytes += 4;
	} else { // One-byte or four-byte signed displacement follows addressing mode byte(s).
		if (modRM_rm == 0b100) { // Contains SIB byte
			char SIB_scale = ((*bytes) >> 6) & 0b11; // Bits 7-6.
			char SIB_index = ((*bytes) >> 3) & 0b111; // Bits 5-3.
			char SIB_base = (*bytes++) & 0b111; // Bits 2-0.

			if (SIB_base == 0b101 && modRM_mod == 0b00) {
				sprintf(RM_output, "[0x%x", *(int *)bytes);
				bytes += 4;
			} else {
				strcpy(RM_output, sib_base_mnemonics[SIB_base]);
			}

			if (SIB_index != 0b100) {
				strcat(RM_output, "+");
				strcat(RM_output, register_mnemonics32[SIB_index]);
				strcat(RM_output, sib_scale_mnemonics[SIB_scale]);
			}
		} else {
			sprintf(RM_output, "[%s", register_mnemonics32[modRM_rm]);
		}

		if (modRM_mod == 0b01) { // One-byte signed displacement follows addressing mode byte(s).
			if (*bytes > 0x7F) {
				sprintf(RM_output + strlen(RM_output), "-0x%x]", -*(char *)bytes++);
			} else {
				sprintf(RM_output + strlen(RM_output), "+0x%x]", *(char *)bytes++);
			}
		} else if (modRM_mod == 0b10) { // Four-byte signed displacement follows addressing mode byte(s).
			if (*(unsigned int *)bytes > 0x7FFFFFFF) {
				sprintf(RM_output + strlen(RM_output), "-0x%x]", -*(int *)bytes);
			} else {
				sprintf(RM_output + strlen(RM_output), "+0x%x]", *(unsigned int *)bytes);
			}

			bytes += 4;
		} else {
			strcat(RM_output, "]");
		}
	}

OUTPUT:
	strcpy(output, instructions[opcode].mnemonic);
	for (int i = 0; i < instructions[opcode].argument_count; i++) {
		if (i > 0) {
			strcat(output, ",");
		}

		switch (instructions[opcode].arguments[i]) {
			case RM:
				if (modRM_mod != 0b11) {
					switch (instructions[opcode].size) {
						case BYTE:
							strcat(output, "BYTE PTR ");
							break;
						case WORD:
							strcat(output, "WORD PTR ");
							break;
						case DWORD:
							strcat(output, "DWORD PTR ");
							break;
						case QWORD:
							strcat(output, "QWORD PTR ");
							break;
						case FWORD:
							strcat(output, "FWORD PTR ");
							break;
						case XMMWORD:
							strcat(output, "XMMWORD PTR ");
							break;
					}
				}

				strcat(output, RM_output);
				break;
			case R:
				strcat(output, R_output);
				break;
			case IMM8:
				sprintf(output + strlen(output), "0x%x", *bytes++);
				break;
			case IMM16:
				sprintf(output + strlen(output), "0x%x", *(short *)bytes);
				bytes += 2;
				break;
			case IMM32:
				sprintf(output + strlen(output), "0x%x", *(int *)bytes);
				bytes += 4;
				break;
			case REL8:
				sprintf(output + strlen(output), "0x%x", offset + ((bytes - base) + 1) + *(char *)bytes++);
				break;
			case REL32:
				sprintf(output + strlen(output), "0x%x", offset + ((bytes - base) + 4) + *(int *)bytes);
				bytes += 4;
				break;
			case PTR1632:
				sprintf(output + strlen(output), "0x%x:0x%x", *(short *)(bytes + 4), *(int *)bytes);
				bytes += 6;
				break;
			case AL:
				strcat(output, "al");
				break;
			case EAX:
				strcat(output, "eax");
				break;
			case ES:
				strcat(output, "es");
				break;
			case CS:
				strcat(output, "cs");
				break;
			case SS:
				strcat(output, "ss");
				break;
			case DS:
				strcat(output, "ds");
				break;
			case ONE:
				strcat(output, "1");
				break;
			case CL:
				strcat(output, "cl");
				break;
			case XMM0:
				strcat(output, "xmm0");
				break;
			case BND0:
				strcat(output, "bdn0");
				break;
			case BAD:
				bytes++;
				break;
			case MM0:
				strcat(output, "mm0");
				break;
		}
	}

	if (((unsigned int)(bytes - base)) <= max) {
		return bytes - base;
	}

ILLEGAL:
	sprintf(output, ".byte 0x%02x\n", opcode);
	return 1;
}

void *Memcpy(void *dest, const void *src, size_t n) {
	if (!n) {
		return dest;
	}

	DWORD a, b;
	if (!VirtualProtect(dest, n, PAGE_EXECUTE_READWRITE, &a) || !VirtualProtect((void *)src, n, PAGE_EXECUTE_READWRITE, &b)) {
		return dest;
	}

	memcpy(dest, src, n);

	VirtualProtect(dest, n, a, &a);
	VirtualProtect((void *)src, n, b, &b);

	return dest;
}

void *SetJMP(void *dest, const void *src, size_t nops) {
	DWORD p;
	if (VirtualProtect((void *)src, 5 + nops, PAGE_EXECUTE_READWRITE, &p)) {
		*(char *)src = (char)0xE9;
		*(void **)((int)src + 1) = (void *)((int)dest - ((int)src + 5));

		for (unsigned int i = 0; i < nops; i++) {
			*(char *)((int)src + 5 + i) = (char)0x90;
		}

		VirtualProtect((void *)src, 5 + nops, p, &p);
	}

	return dest;
}

int MaskCompare(const char *s1, const char *s2, char *mask) {
	for (; *mask; mask++, s1++, s2++) {
		if (*mask == 'x' && *s1 != *s2) {
			return 0;
		}
	}

	return !!mask;
}

void *FindPattern(void *base, unsigned int search_length, char *pattern, char *mask) {
	for (unsigned int l = (int)base + search_length; (unsigned int)base < l; base = (void *)((int)base + 1)) {
		if (MaskCompare((char *)base, pattern, mask)) {
			return base;
		}
	}

	return 0;
}

void *ProcessFindPattern(HANDLE process, void *base, unsigned int search_length, char *pattern, char *mask) {
	char *buffer = (char *)malloc(search_length);

	unsigned int read = 0, temp = 0;
	while (read < search_length) {
		if (!(temp = ReadBuffer(process, (void *)((unsigned int)base + read), buffer + read, search_length - read))) {
			break;
		}

		read += temp;
	}

	unsigned int addr = (unsigned int)FindPattern(buffer, search_length, pattern, mask) - (unsigned int)buffer + (unsigned int)base;
	free(buffer);
	return (void *)addr;
}

void TrampolineHook(void *dest, void *src, void **gate) {
	char disassembled[0xFF];

	unsigned int size = 0;
	int relative = -1;
	while (size < 5) {
		if (*(unsigned char *)((unsigned int)src + size) == 0xE8 || *(unsigned char *)((unsigned int)src + size) == 0xE9) {
			relative = size;
		}

		size += Disassemble((unsigned char *)((unsigned int)src + size), 20, size, disassembled);
	}

	*gate = VirtualAlloc(NULL, size + 5, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	Memcpy(*gate, src, size);

	if (relative != -1) {
		Disassemble((unsigned char *)((unsigned int)src + relative), 20, (int)src, disassembled);

		int addr;
		sscanf(strchr(disassembled, ' ') + 1, "0x%x", &addr);

		*(int *)(((int)*gate) + relative + 1) = addr - (((int)*gate) + relative) - 5;
	}

	SetJMP((void *)((int)src + size), (void *)((int)*gate + size), 0);
	SetJMP(dest, src, size - 5);
}

void UnTrampolineHook(void *src, void **gate) {
	char disassembled[0xFF];

	unsigned int size = 0;
	int relative = -1;
	while (size < 5) {
		if (*(unsigned char *)((unsigned int)*gate + size) == 0xE8 || *(unsigned char *)((unsigned int)*gate + size) == 0xE9) {
			relative = size;
		}

		size += Disassemble((unsigned char *)((unsigned int)*gate + size), 20, size, disassembled);
	}

	if (relative != -1) {
		Disassemble((unsigned char *)((unsigned int)*gate + relative), 20, (int)*gate, disassembled);

		int addr;
		sscanf(strchr(disassembled, ' ') + 1, "0x%x", &addr);

		*(int *)(((int)*gate) + relative + 1) = addr - (((int)src) + relative) - 5;
	}

	Memcpy(src, *gate, size);

	VirtualFree(*gate, 0, MEM_RELEASE | MEM_DECOMMIT);
	*gate = src;
}

unsigned int *GetD3D9Exports() {
	unsigned int base = (unsigned int)GetModuleHandleA("d3d9.dll");
	if (!base) {
		return 0;
	}

	return *(unsigned int **)((unsigned int)FindPattern((void *)base, 0x128000, "\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx") + 2);
}

MODULEENTRY32 InjectDLL(int process_id, wchar_t *DLL_path) {
	HANDLE process = OpenProcess(PROCESS_ALL_ACCESS, 0, process_id);
	if (!process) {
		return{ 0 };
	}

	wchar_t path[MAX_PATH];
	GetFullPathName(DLL_path, MAX_PATH, path, NULL);

	void *arg = (void *)VirtualAllocEx(process, NULL, sizeof(path), MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	WriteProcessMemory(process, arg, path, sizeof(path), NULL);

	WaitForSingleObject(CreateRemoteThread(process, 0, 0, (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryW"), arg, 0, 0), INFINITE);

	VirtualFreeEx(process, arg, NULL, MEM_RELEASE | MEM_DECOMMIT);

	PathStripPath(path);

	return GetModuleInfoByName(process_id, path);
}