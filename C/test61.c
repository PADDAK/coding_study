//test60,62비교 메모리공간값변경못하게, const위치
#include<stdio.h>
int main(){
    char a='A';
    char b='B';

    const char* p=&a;

    printf("%c\n",a);
    printf("%c\n",*p);

    p=&b; //주소변경가능
    printf("%c\n",b);
    printf("%c\n",*p);

    a='X'; //직접변경가능
    b='C'; //직접변경가능
    //*p='D'; 에러, 간접변경못하게해놈

    printf("%c\n",a);
    printf("%c\n",b);
    printf("%c\n",*p);

    return 0;
}