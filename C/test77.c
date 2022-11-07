//int argc: 문자열 수저장, char* argv[]:문자열의 첫번째 주소 저장
#include<stdio.h>

int main(int argc,char* argv[]){
    int i=0;
    printf("문자열의수:%d\n",argc);

    for(i=0;i<argc;i++){
        printf("%d번째 문자열:%s\n",i,argv[i]);
    }
    return 0;
}