#include<stdio.h>

int add(int x,int y);
int count();

int main(){
    int a,b,result,c;

    c=0;
    
    while(c<100){
    printf("두 정수입력(0,0입력시종료):");
    scanf("%d,%d",&a,&b);

    if(a==0 && b==0){
    printf("프로그램종료");
    break;
    }
    
    else{
    result=add(a,b);
    printf("덧셈결과:%d\n",result);
    }
    c=count();
    }
    printf("총 연산수:%d",c);
    return 0;

}

int add(int x,int y)
{
    return x+y;
}

int count(){
    static int c=0;
    c++;

    return c;
}