FROM golang as builder
WORKDIR /src
COPY main.go .
RUN go get -d
RUN GO_EXTLINK_ENABLED=0 CGO_ENABLED=0 go build \
    -ldflags "-w -extldflags -static" \
    -tags netgo -installsuffix netgo \
    -o /server main.go

FROM scratch
COPY --from=builder /server /server
ENTRYPOINT [ "/server" ]