#include<stdio.h>
int main()
{
    int a,b,c;
    printf("세 정수를 입력하시오:");
    scanf("%d,%d,%d",&a,&b,&c);
    
    if(a>=b)
    printf("%d",a);
    
    else if(b>=c)
    printf("%d",b);

    else
    printf("%d",c);
}