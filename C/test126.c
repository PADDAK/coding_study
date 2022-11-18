#include<stdio.h>
int main(){
    printf("파일이름:%s\n",__FILE__);
    printf("행 번호:%d\n",__LINE__);
    printf("컴파일 시간:%s\n",__DATE__);
    printf("컴파일 날짜:%s\n",__TIME__);
}