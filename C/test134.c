#include<stdio.h>
#include<string.h>
int main(){
    char s1[10]="Hello";
    char s2[10];
    char s3[10];

    strcpy(s2,s1);
    strncpy(s3,s1,3);
    printf("s1:%s\n",s1);
    printf("s2:%s\n",s2);
    printf("s3:%s\n",s3);


    return 0;
}