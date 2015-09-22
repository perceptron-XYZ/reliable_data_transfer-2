#include <winsock.h>
#include <stdio.h>
#include <stdlib.h>

#define RAWBUF_SIZE 512

void prompt(const char* message, char*buffer);
SOCKET open_port(int port);
SOCKADDR_IN prepare_peer_connection(char* hostname, int port);