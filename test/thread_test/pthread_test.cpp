#include <arpa/inet.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <netinet/in.h>
#include <pthread.h>
#include <signal.h>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <vector>
using namespace std;

/*
void *GetValue(void *arg) {
  ReceiverContext *context = static_cast<ReceiverContext *>(arg);
  int sock = context->client_sock;
  bool *exit_flag = (bool *)context->ctx;
  SendRaw *send_raw = (SendRaw*)context->image_data;
  delete context;

  int size = sizeof(uint64_t)*2 + picture_size * sizeof(uint8_t) + sizeof(int);

  while (!(*exit_flag)) {
    int recv_len = ReceiveBinaryMsg(sock, (char *)send_raw, size);
    printf("recv_len: %d\n", recv_len);
    if (recv_len < static_cast<int>(sizeof(SendRaw))) {
      std::perror("recv sended raw error");
      return nullptr;
    }
  }

  if (close(sock) < 0) {
    std::perror("close");
    return nullptr;
  }

  return nullptr;
}*/



void * getValue(void * arg)
{
//cout<<*(static_cast<int*>(arg))<<endl;

return nullptr;

}

void *secondFun(void *arg)
{
int i=0;
//cout<<"nide"<<endl;
while(i<10000)
{
//cout<<"i="<<i<<endl;
pthread_t th;
pthread_create(&th, nullptr, getValue, static_cast<void *>(&i));
int ret =  pthread_detach(th);
    if (ret != 0) {
      std::perror("pthread_detach");
      break;
    }
i++;
}
return nullptr;
}

int main()
{
   sockaddr_in addr;

  std::memset(&addr, 0, sizeof(sockaddr_in));
  addr.sin_family = PF_INET;
const char *ip = "10020";  


    inet_pton(AF_INET, ip, &addr.sin_addr);
cout<<"ip="<<addr.sin_addr.s_addr<<endl;

//int inet_pton(int af, const char *src, void *dst);
  pthread_t socket_server;
int *a= NULL;
    int rett =pthread_create(&socket_server, NULL,  secondFun,static_cast<void*>(a)); 
//cout<<"rett="<<rett<<endl;   
int ret = pthread_detach(socket_server);

    if (ret != 0) {
      std::perror("pthread_detach");
     
    }
sleep(1000);
//cout<<"wode"<<endl;
return 0;

}
