#include<stdio.h>
int main()
{
    int a,b,x;
    char c;
    printf("수식을 입력하시오(예:2+5):");
    scanf("%d%c%d",&a,&c,&b);
    
    switch(c)
    {case '+':
    x=a+b;
    break;

    case '-':
    x=a-b;
    break;

    case '*':
    x=a*b;
    break;

    case '/':
    x=a/b;
    break;

    default:
    printf("지원되지않는연산");
    break;
    }
    printf("%d%c%d=%d",a,c,b,x);
}