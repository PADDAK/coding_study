//절댓값구하기
#include<stdio.h>
int main()
{
    int a,b;
    printf("정수입력:");
    scanf("%d",&a);

    if(a>0)
    b=a*1;

    else
    b=a*(-1);

    printf("%d의 절대값:%d",a,b);

    return 0;
}