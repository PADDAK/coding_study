#include<stdio.h>
int main()
{
    int a,b;
    printf("두 개의 정수를 입력하시오:");
    scanf("%d,%d",&a,&b);

    if(a>b)
    printf("큰 수는%d입니다",a);
    else if(a==b)
    printf("두 수는 같다");
    else
    printf("큰 수는%d입니다",b);
}