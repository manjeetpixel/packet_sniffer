#include <stdio.h>
#include <sys/socket.h>
#include <linux/if_ether.h>
#include <arpa/inet.h>
#include <linux/if_packet.h>
#include <unistd.h>
#include <string.h>

int main(void){
    while(true)
    {
        // Creating a socket
    int sock = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
    // Checking socket gave a fd or not
    if (sock < 0){
        perror("socket");
        return 1;
    }
    unsigned char buffer[65536];
    int len = recvfrom(sock, buffer, sizeof(buffer), 0, NULL, NULL);
    if (len < 0){
        perror("recvfrom");
        return 1;
    }
    printf("got packet size=%d\n",len);
    for (int i = 0; i < len; i++){
        printf("%02x ",buffer[i]);
    }
    printf("\n");
    close(sock);
    }
    return 0;
}
  
