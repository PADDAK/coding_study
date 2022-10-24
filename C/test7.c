#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("숫자를 입력하시오:");
    scanf("%d",&a);

    for(;a>0;a--)
    {
        for(b=1;b<10;b++)
        {
            c=a*b;
            printf("%d*%d=%d\n",a,b,c);
        }
        b=1; 
    }
    return 0;
}