//정수형 배열에 숫자저장하고 포인터변수로 배열에접근하여 배열의합
#include<stdio.h>
int main(){
    int array[]={10,30,40,30,20};
    int i,a=0;
    int *p;
    p=array;

    for(i=0;i<5;i++)
    a=a+*(p+i);

    printf("%d",a);
}