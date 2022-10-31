//팩토리얼
#include<stdio.h>
int main()
{
    int a,b;
    int factorial=1;
    printf("정수입력:");
    scanf("%d",&a);

    for(b=a;b>=1;b--)
    {
        factorial*=b;
    }

    printf("%d의 팩토리얼:%d",a,factorial);
}
