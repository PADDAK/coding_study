#include<stdio.h>
void add(double x,double y);
int main(){
    double x=3.5, y=5.1;
    
    void(*pointer)(double,double);

    printf("add의 함수주소:%x\n",add);
    printf("함수 포인터의 주소:%x\n",&pointer);

    pointer=add;
    pointer(x,y);

    return 0;
}

void add(double x,double y)
{
    double result;
    result=x+y;
    printf("%lf+%lf=%lf입니다\n",x,y,result);

}