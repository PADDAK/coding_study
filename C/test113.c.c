//abcd 입력해서 'a''b''c''d'따로출력하고 널문자들어가면 정지시키는건데 널문자 하나는 꼭 나옴
#include<stdio.h>
#include<string.h>
int main(){
    char a[21];
    int i;

    gets(a);
    for(i=0;i<21;i++){
        printf("'%c'\n",a[i]);
        // if(a[i]==NULL)
        // break;
    }
}
