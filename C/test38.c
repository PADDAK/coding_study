#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i;
    srand((unsigned)time(NULL));

    for (i=1;i<=10;i++){
        printf("rand():%d\n",rand()%410+1);
    }
    return 0;
}