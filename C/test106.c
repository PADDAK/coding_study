#include<stdio.h>
#include<string.h>
int main(){
    int result1,result2;
    char array1[20];
    char array2[20];

    printf("처음머쓸래?:");
    gets(array1);
    printf("둘째머쓸래?:");
    gets(array2);

    result1=strcmp(array1,array2);
    result2=strncmp(array1,array2,5);
    
    printf("%d %d",result1,result2);
}