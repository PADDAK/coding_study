//사용자정의로 사칙연산프로그램
#include<stdio.h>
int sum(int x, int y);
int minus(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main()
{
    int result1,result2,result3,result4;
    int a,b;

    printf("두수입력:");
    scanf("%d,%d",&a,&b);

    result1=sum(a,b);
    printf("%d+%d=%d\n",a,b,result1);
    result2=minus(a,b);
    printf("%d-%d=%d\n",a,b,result2);
    result3=multiply(a,b);
    printf("%d*%d=%d\n",a,b,result3);
    result4=divide(a,b);
    printf("%d/%d=%d",a,b,result4);

    return 0;
}

int sum(int x, int y)
{
    return x+y;
}
int minus(int x, int y)
{
    return x-y;
}
int multiply(int x, int y)
{
    return x*y;
}
int divide(int x, int y)
{
    return x/y;
}