#ifndef CLIENT_H
#define CLIENT_H
#define DATA_BUFSIZE 1024

#include <string>
#include "safequeue/safequeue.cpp"
#include <winsock2.h>
#include "clogger/logger.h"

class Client
{
public:
    Client(const char* addr, const char* port);
    ~Client();
	void loop();
    void threaded_loop();

    void handle_read();
    void handle_write();
    void handle_close();


    std::string get();
    void put(std::string string);
    bool empty();
    int status;

private:
    int do_connect(const char* addr, const char * port);
    void do_read();
    void do_write();

    void error();
    SafeQueue<std::string> send_queue;
    SafeQueue<std::string> recv_queue;

    Logger logger;
    SOCKET client_socket;
    char read_buffer[DATA_BUFSIZE];
    WSADATA wsaData;
    WSANETWORKEVENTS hProcessEvent;
};

#endif
