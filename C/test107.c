#include<stdio.h>
#include<string.h>
int main(){
    char array1[50]="Good-morning,Good-afternoon,Good-evening";
    char array2[10]="morning";
    
    char *p1;
    char *p2;

    p1=strchr(array1,'o');
    p2=strstr(array1,array2);

    printf("a위치:%d\n",p1);
    printf("문자열:%s\n",p1);
    printf("-------------\n");
    printf("문자열시작우치:%d\n",p2);
    printf("문자열:%s",p2);
}