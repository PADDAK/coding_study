#include<stdio.h>
/*void main(){
    int A;
    sum(5,10,A);
    return;
}*/
//void-자료형이 없음 그냥 return 만 사용
//char-정수,문자 반환, return 정수
//short-정수반환, return 정수
//int-정수반환, return 정수
//float-실수형 반환, return 실수
//double-실수 반환, return 실수
//bool-논리값 반환, return 논리
int add(int x,int y);
int main(void){
    int a;
    a=add(3,4);
    printf("%d",a);
    printf("%d",add(2,5));

    return 0;
}


int add(int x, int y){
    int a,b;
    printf("\n블랙핑크");
    printf("\n");

    a=10;
    b=30;;

    return x*y;
}
