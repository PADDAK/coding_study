#include<stdio.h>
void add(int num1,int num2);
void subtract(int num1,int num2);
int main(){
    int x,z;
    char c;
    void(*pointer)(int,int);

    printf("add함수의주소:%x\n",add);
    printf("subtract함수의주소:%x\n",subtract);
    printf("입력:");
    scanf("%d%c%d",&x,&c,&z);

    if(c=='+')
    pointer=add;

    else if(c=='-')
    pointer=subtract;
    else
    printf("두번째연산자는'+'또는'-'입력\n");
    
    pointer(x,z);
    return 0;
    }

    void add(int num1,int num2)
    {
        int result;
        result=num1+num2;
        printf("%d+%d=%d입니다\n",num1,num2,result);
    }

    void subtract(int num1,int num2)
    {
        int result;
        result=num1-num2;
        printf("%d-%d=%d입니다\n",num1,num2,result);
    }