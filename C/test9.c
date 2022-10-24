//n의 배수찾기
#include<stdio.h>
int main()
{ 
    int n,a;

    printf("숫자를 입력하시오:");
    scanf("%d",&n);

    for(a=1;;a++)
    {
        if(a%n==0)
        {
            printf("%d는%d의 배수다\n",a,n);
        }
    }
}