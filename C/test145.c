//거듭제곱
#include<stdio.h>

int involution(int a,int b);
int main(){
    int x,n;    //x:밑 n:지수
    scanf("%d %d",&x,&n);

    printf("%d",involution(x,n));
}

int involution(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return a*involution(a,b-1);
    }
}