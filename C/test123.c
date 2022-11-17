#include<stdio.h>
#include<stdlib.h>

int *allocate(int num,...);

int main(){
    int a=4,b=8;
    int *p1;

    p1=allocate(1,a);
    p1[0]=10;
    printf("4바이트 힙 영역에 저장된값:%d",p1[0]);

    free(p1);
}

int *allocate(int num,...){
    int *p=&num+1;
    static int* heap1=NULL;

    if(num==1){
        heap1=(int*)malloc(p[0]);
        return heap1;
    }
    else{
        printf("인자의 개수는 1개이하");
        return NULL;
    }
}