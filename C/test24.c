// 사용자 라이브러리 만들기
#include<stdio.h>
int quotient(float a,float b);
int remainder(float a,float b);
float divide(float a, float b);

int main(void)
{
    float a,b,result3;
    int result,result2;

    printf("숫자입력:");
    scanf("%f",&a);
    printf("숫자입력:");
    scanf("%f",&b);

    result=quotient(a,b);
    printf("몫:%d",result);

    result2=remainder(a,b);
    printf("나머지:%d",result2);

    result3=divide(a,b);
    printf("나누기:%f",result3);

    return 0;
}

int quotient(float a, float b)
{
    int result;
    return result=a/b;
}
int remainder(float a,float b)
{
    int result;
    return result=(a%b);
}
float divide(float a,float b)
{
    float result;
    return result=a/b;
}
