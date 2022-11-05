#include<stdio.h>
int max(int x, int y);

int main(){
    int a,b,result;
    printf("정수입력:");
    scanf("%d,%d",&a,&b);
    result=max(a,b);
    printf("%d",result);
    return 0;
}

int max(int x, int y){
    if(x>y)
    return x;

    else
    return y;
}