#include<stdio.h>
#include<stdlib.h>
int main(){
    char *p1=(char*)malloc(2);
    char *p2=(int*)malloc(8);

    p1[0]='A';
    p1[1]='B';

    p2[0]=10;
    p2[1]=20;

    printf("주소:%x %x %x %x\n",&p1[0],&p1[1],&p2[0],&p2[1]);
    printf("값:%d %d %d %d\n",p1[0],p1[1],p2[0],p2[1]);
    
    free(p1);
    free(p2);
}