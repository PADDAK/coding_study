#include<stdio.h>
int Sum(int a, int b)
{
    return(a+b);
}

int main(void)
{
    int num1,num2,sum;
    printf("숫자입력:\n");
    scanf("%d",&num1);
    printf("숫자입력:\n");
    scanf("%d",&num2);
    
    sum=Sum(num1,num2);

    printf("두수의합은:%d\n",sum);

    return 0;
}