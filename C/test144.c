#include<stdio.h>
int factorial(int a);
int main(){
    int n;
    printf("팩토리얼:");
    scanf("%d",&n);

    printf("%d",factorial(n));

}

int factorial(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}