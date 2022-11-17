#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0;
    int *p=(int*)calloc(sizeof(int),sizeof(int));

    if(p==NULL)
        printf("힙 동적 메모리 실패");
    
    for(i=0;i<4;i++){
        p[i]=i;
        printf("주소:%x\n값:%d\n",&p[i],p[i]);
    }
    free(p);
}