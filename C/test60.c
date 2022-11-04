//포인터변수에 다른메모리주소 저장못하게하기 const위치, test61,62비교
#include<stdio.h>
int main(){
    char a='A';
    char b='B';

    char* const p=&a; //const로 p=&a 상수화

    *p='C'; //메모리공간값 간접변경
    printf("%c\n",a);
    printf("%c\n",*p);

    return 0;
}