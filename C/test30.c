//별찍기 사각형
#include<stdio.h>
int main()
{
    int a,b,n;
    printf("몇줄:");
    scanf("%d",&n);

    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n;b++)
        {
            printf("*");
        }
        printf("\n");
    }   
}