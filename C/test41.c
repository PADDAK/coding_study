//사용자정의로 도형넓이
#include<stdio.h>

double quadrilateral(double x,double y);
double triangle(double x, double y);

int main()
{
    double a,b;
    double result1,result2;
    
    printf("밑변:");
    scanf("%lf",&a);
    printf("높이:");
    scanf("%lf",&b);

    result1=quadrilateral(a,b);
    printf("사각형넓이:%.2lf\n",result1);

    result2=triangle(a,b);
    printf("삼각형넓이:%.2lf",result2);

    return 0;
}

double quadrilateral(double x,double y)
{
    return x*y;
}

double triangle(double x, double y)
{
    return x*y*(double)1/2;
}