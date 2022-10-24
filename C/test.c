#include <stdio.h>
int main(void)
{
    int a=1,b;
    int c=a*b;
    while(a<10)
    {
        b=1;
        while(b<10)
        {printf("%d*%d=%d\n",a,b,c);
        b++;
        }
        a++;
    } 
    return 0;
}   
