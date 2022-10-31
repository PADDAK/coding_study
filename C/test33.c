//사용자라이브러리 팩토리얼
#include<stdio.h>
int factorial();
int main()
{
    int a,b;
    printf("정수입력:");
    scanf("%d",&a);

    b=factorial(a);

    printf("%d의 팩토리얼:%d",a,b);
    return 0;
}

int factorial(int x)
{
    if(x<=1)
    return 1;

    else
    return x*factorial(x-1);
}
