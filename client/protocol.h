#include <iostream>
#include <winsock.h>
#include <stdio.h>
#include <stdlib.h>
#define ROUTER_PORT1 7000   // router port number 1 (server)
#define ROUTER_PORT2 7001   // router port number 2 (client)
#define PEER_PORT1  5000    // peer port number 1 (server)
#define PEER_PORT2  5001    // peer port number 2 (client)
#define FRAME_SIZE  128     // Size (in bytes) of each packet
#define WINDOW_SIZE 19

#define GET "get"           // Method name for GET requests
#define PUT "put"           // Method name for PUT requests
#define HEADER "%s\t%s\t%s" // Format string for headers

void get(SOCKET s, SOCKADDR_IN sa, char * username, char* filename, int client_num, int server_num, FILE* logfile);
void put(SOCKET s, SOCKADDR_IN sa, char * username, char* filename, int client_num, int server_num, FILE* logfile);
