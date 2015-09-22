#include <iostream>
#include <winsock.h>
#include <stdio.h>
#include <stdlib.h>
#define TIMEOUT_USEC 300000

void write_log(FILE* logfile, char* username, char* message);
void make_packet(char* packet, char* buffer, int buffer_size, int number);
void split_packet(char* packet, char* buffer, int buffer_size, int* number);
int send_packet(SOCKET sock, SOCKADDR_IN sa, char* buffer, int size, int pid);
int recv_packet(SOCKET sock, SOCKADDR_IN sa, char* buffer, int size, int pid);
int send_safe(SOCKET sock, SOCKADDR_IN sa, char* buffer, int size, int pid);
int recv_safe(SOCKET sock, SOCKADDR_IN sa, char* buffer, int size, int pid);