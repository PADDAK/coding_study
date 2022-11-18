#include<stdio.h>
#define PI 3.14
double extent(int radius);
double circle(int radius);

int main(){
    int radius;
    printf("반지름입력:");
    scanf("%d",&radius);

    printf("%.1lf\n",extent(radius));
    printf("%.1lf\n",circle(radius));
}
double extent(int radius){
    return PI*radius*radius;
}
double circle(int radius){
    return PI*2*radius;
}