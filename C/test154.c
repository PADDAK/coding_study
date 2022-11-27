#include<stdio.h>
#pragma pack(push,1)    //1바이트 크기로 정렬,스택
struct packetheader{
    char flags;
    int seq;
};

int main(){
    struct packetheader header;
    printf("%d\n",sizeof(header.flags));
    printf("%d\n",sizeof(header.seq));
    printf("%d\n",sizeof(header));
}