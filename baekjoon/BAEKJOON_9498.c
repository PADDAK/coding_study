#include<stdio.h>
int main(){
    int grade;
    scanf("%d",&grade);

    if(90<=grade && grade<=100){
        printf("A");
    }
    else if(80<=grade && grade<=89){
        printf("B");
    }
    else if(70<=grade && grade<=79){
        printf("C");
    }
    else if(60<=grade && grade<=69){
        printf("D");
    }
    else{
        printf("F");
    }

}