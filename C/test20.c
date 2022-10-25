//test 21과 비교-두수의합
#include<stdio.h>
int main(void)
{
    int num1, num2, sum;
    printf("----실행----\n");

    printf("숫자입력:");
    scanf("%d",&num1);
    printf("숫자입력:");
    scanf("%d",&num2);

    sum=num1+num2;
    printf("두수의합은:%d",sum);

    return 0;
}