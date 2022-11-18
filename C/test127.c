#include<stdio.h>

#define CODE 2
int main(){
    int num1, num2,result;
    printf("두수입력:");
    scanf("%d %d",&num1,&num2);

    #if(CODE==1)
        result=num1+num2;
        printf("결과:%d",result);
    #endif
    #if(CODE==2)
        result=num1-num2;
        printf("결과:%d",result);
    #endif
    #if(CODE==3)
        result=num1/num2;
        printf("결과:%d",result);
    #endif
    #if(CODE==4)
        result=num1*num2;
        printf("결과:%d",result);
    #endif

}