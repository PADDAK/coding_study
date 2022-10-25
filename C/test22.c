//test 20,21과비교-두수의합
#include<stdio.h>
int sum(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void information(void)
{
    printf("----실행----\n");
    return;
}
void inputnumber(void)
{
    printf("숫자입력:");
    return;
}
int input(void)
{
    int a;
    scanf("%d",&a);
    return a;
}
int output(int sum)
{
    printf("두수의합은:%d",sum);
    return sum;
}

int main()
{
    int num1,num2;
    information();
    inputnumber();
    num1=input();
    inputnumber();
    num2=input();

    int result = sum(num1, num2);
    output(result);

    return 0;    
}