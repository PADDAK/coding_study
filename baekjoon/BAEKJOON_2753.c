#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);

    if(4/year==0 && 100/year!=0 && 400/year==0){
        printf("1");
    }
    else{
        printf("0");
    }
}