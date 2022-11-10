#include<stdio.h>
int sum(int x, int y);
int subtract(int x,int y);

int main(){
    int a,b;
    int result1,result2,result3;

    scanf("%d,%d",&a,&b);
    result1=sum(a,b);
    result2=subtract(a,b);
    

    printf("%d %d",result1,result2);
}

int sum(int x, int y){
    return x+y;
}
int subtract(int x, int y){
    return x-y;
}