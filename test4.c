#include<stdio.h>
int main()
{
    int a=1,b=1,c;
    while(a<10)
    {
        while(b<10)
        { 
            c=a*b;
            printf("%d*%d=%d\n",a,b,c);
             b++;
        }
        b=1;
        a++;
    }
   return 0; 
}