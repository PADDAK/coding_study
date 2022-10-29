#include<stdio.h>
int main()
{
    int arr[3]={0,};

    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    for(int i=0; i<3;i++)
    printf("%d번째인덱스:%d\n",i,arr[i]);
}