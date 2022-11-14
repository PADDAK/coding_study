#include<stdio.h>
#include<string.h>
int main(){
    char array1[]="Hello C";
    char array2[]="내 플로 우";

    printf("영문 문자열길이:%d\n",strlen(array1));
    printf("한글 문자열길이:%d\n",strlen(array2));

    printf("영문 문자열크기:%d\n",sizeof(array1));
    printf("한글 문자열크기:%d\n",sizeof(array2));

}