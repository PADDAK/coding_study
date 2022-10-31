//별찍기 삼각형2
#include<stdio.h>
int main()
{
    int a,b,n;
    printf("몇줄:");
    scanf("%d",&n);

    for(a=1;a<=n;a++)
    {
        for(b=n;b>=a;b--)
        {
            printf("*");
        }
        printf("\n");
    }
}