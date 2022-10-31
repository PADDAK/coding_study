//1부터 n까지합
#include<stdio.h>
int add(int x);

int main(){
    int n,result;

    printf("숫자입력:");
    scanf("%d",&n);
    
    result=add(n);
    printf("1부터 %d까지의합:%d",n,result);
}

int add(int x){
    if(x<=1)
        return 1;
    else
        return x+add(x-1);

}