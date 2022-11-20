#include<stdio.h>
int num(int a);
int main(){
    int num1=10, num2=20;
    int *p1, *p2;

    p1=&num1;
    p2=&num2;

    if(p1!=p2){
        printf("p1가 가리키고 있는 주소에 저장된값:%d\n",*p1);
        printf("p2가 가리키고 있는 주소에 저장된값:%d\n",*p2);
        printf("p1과 p2는 다른주소 가리킴\n");
    }

    else{
        printf("p1가 가리키고 있는 주소에 저장된값:%d\n",*p1);
        printf("p2가 가리키고 있는 주소에 저장된값:%d\n",*p1);
        printf("p1과 p2는 같은주소 가리킴\n");
    }
}
