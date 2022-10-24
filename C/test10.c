//논리연산자로 조건판별
#include<stdio.h>
int main()
{
    int age;

    printf("나이를 입력하시오:");
    scanf("%d",&age);

    if(age>19&&age<30)
    printf("회원가입가능합니다");

    else
    printf("회원가입불가능합니다");
}
