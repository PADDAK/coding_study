#include<stdio.h>
void swap(int *num1, int* num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int main(){
    int num1=10;
    int num2=20;
    printf("num1값:%d\n",num1);
    printf("num2값:%d\n",num2);

    swap(&num1,&num2);
    printf("\n swap함수실행후\n");
    printf("num1값:%d\n",num1);
    printf("num2값:%d\n",num2);
}