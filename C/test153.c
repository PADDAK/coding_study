#include<stdio.h>
struct packetheader{
    char flags;
    int seq;
};
int main(){
    struct packetheader header;
    printf("%d\n",sizeof(header.flags));
    printf("%d\n",sizeof(header.seq));
    printf("%d\n",sizeof(header));
    printf("%d\n",sizeof(struct packetheader));
    return 0;
}