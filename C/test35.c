//사용자라이브러리 절댓값
#include<stdio.h>
int abs();
int main()
{
    int a,b;
    printf("정수입력:");
    scanf("%d",&a);

    b=abs(a);

    printf("%d의 절대값:%d",a,b);

    return 0;
}

int abs(int x)
{
    if(x>0)
    return x=x*1;

    else
    return x=x*(-1);
}