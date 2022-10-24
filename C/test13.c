#include<stdio.h>
int main()
{
    int a,b;
    printf("찍수찾는프로그램\n");
    printf("몇까지찾을까?:");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        if(b%2==0)
            printf("%d\n",b);

        else
            printf("없당");
    }
}