//홀수빼고 짝수찾기
#include<stdio.h>
int main()
{
    int a,b;
    printf("몇까지짝수찾을꺼냐:");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        if(b%2==1)
        continue;
        printf("%d\n",b);
    }
}