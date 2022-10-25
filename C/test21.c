//test 20과비교-두수의합(실패)
#include<stdio.h>
int Sum(int num1, int num2)
{
    return(num1+num2);
}
void information(void)
{
    printf("----실행----\n");
    return;
}
int input(void)
{
    int num1;
    scanf("%d",&num1);
    return 0;
}

int output(int Sum)
{
    printf("두수의합은:%d",Sum);
    return Sum;
}

int num1,num2,sum;

int main(void)
{
    information();
    printf("두수를 입력하시오:");
    num1=input();
    printf("두수를 입력하시오:");
    num2=input();
    
    output(Sum);
    
    return 0;
}