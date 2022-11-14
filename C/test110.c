//10개문자 저장하고 출력할라는데 5개까지밖에안나옴
#include<stdio.h>
int main(){
    char array[10];
    int i=0;

    for(i=0;i<10;i++)
    scanf("%c",&array[i]);
    
    for(i=0;i<10;i++)
    printf("%c",array[i]);
    
}