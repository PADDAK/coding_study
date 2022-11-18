#include<stdio.h>
#define output1(a,b)a+b
#define output2(a,b)#a"+"#b

int main(){
    printf("%d\n",output1(11,22));
    printf("%s\n",output2(11,22));
}