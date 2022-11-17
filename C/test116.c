#include<stdio.h>
#include<stdlib.h>
int main(){
    int* p;
    p=(int*)malloc(4);

    if(p==NULL);
        printf("힙 영역에 동적메모리 할당 실패\n");

    *p=10;
    printf("주소:%x\n",p);
    printf("값:%d\n",*p);

    free(p);
}