#include<stdio.h>
int main(){
    char c=3;
    double d=3.1;

    void* vx=NULL;  //void포인터:자료형애 구애받지않고 저장가능

    vx=&c;
    printf("vx의 주소값:%x\n",vx);
    printf("*vx의값:%d\n",*(char*)vx);  //void포인터는 값저장변경불가능->강제형변환필요, *연산으로 간접접근불가능

    vx=&d;
    printf("vs의 주소값:%x\n",vx);
    printf("*vx의값:%lf\n",*(double*)vx);
}