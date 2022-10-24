#include<stdio.h>
int main()
{
    int a,b,c;

    printf("두 수 사이 홀수뽑아내는 프로그램\n");
    printf("두 수를 입력하시오:");
    scanf("%d,%d",&a,&b);

    for(c=a;c<=b;c++)
    {
        if(c%2==0)
        continue;

        printf("%d\n",c);
    }
}