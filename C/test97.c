//포인터변수로 계산기
#include<stdio.h>
int main(){
   int num1,num2;
   double num3;
   int *p1,*p2;
   double *p3;
   char a;
   char *k;

   p1=&num1;
   p2=&num2;
   p3=&num3;
   k=&a;

   printf("사칙연산 입력:");
   scanf("%d%c%d",p1,k,p2);
   if(a=='+'){
        num3=num1+num2;
        printf("%d%c%d=%.1lf",*p1,*k,*p2,*p3);
    }
    else if(a=='-'){
        num3=num1-num2;
        printf("%d%c%d=%.1lf",*p1,*k,*p2,*p3);
    }
    else if(a=='*'){
        num3=num1*num2;
        printf("%d%c%d=%.1lf",*p1,*k,*p2,*p3);
    }
    else if(a=='/'){
        num3=num1/num2;
        printf("%d%c%d=%.1lf",*p1,*k,*p2,*p3);
    }
    else
    printf("똑바로써라");
}

