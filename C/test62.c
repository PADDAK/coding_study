//메모리공간주소,값 다 변경안되게 test60,61과 비교, const위치
#include<stdio.h>
int main(){
    char a='A';
    char b='B';

    const char* const p=&a;

    printf("%c\n",*p);
    printf("%c\n",a);

    a='X';
    b='C';

    printf("%c\n",a);
    printf("%c\n",b);

    //p=&b;     에러
    //*p='D'    에러
    return 0;
}
