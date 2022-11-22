//피보나치수열
#include<stdio.h>
int fib(int k);
int main(){
    int k; //k번째 항
    scanf("%d",&k);

    printf("%d",fib(k));
}

int fib(int k){
    if(k==1){
        return 0;
    }
    else if(k==2){
        return 1;
    }
    else{
        return fib(k-2)+fib(k-1);
    }
}