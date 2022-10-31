//n승
#include<stdio.h>
int INTEGER(int x);
int SQUARE(int x);
int CUBE(int x);
int QUARTIC(int x);
int QUINTIC(int x);

int main(){

    int result1,result2,result3,result4,result5;
    int n,a;
    
    printf("몇번째수까지?:");
    scanf("%d",&n);
    
    printf("A TABLE OF POWERS\n");
    printf("----------------------------------------------\n");
    printf("INTEGER\tSQUARE\tCUBE\tQUARTIC\tQUINTIC\n");
    printf("----------------------------------------------\n");

    for(a=1;a<=n;a++){
    result1=INTEGER(a);
    result2=SQUARE(a);
    result3=CUBE(a);
    result4=QUARTIC(a);
    result5=QUINTIC(a);
    printf("%d\t%d\t%d\t%d\t%d\t",result1,result2,result3,result4,result5);
    printf("\n");
    }
    return 0;
}

int INTEGER(int x){
    return x;
}
int SQUARE(int x){
    return x*x;
}
int CUBE(int x){
    return x*x*x;
}
int QUARTIC(int x){
    return x*x*x*x;
}
int QUINTIC(int x){
    return x*x*x*x*x;
}