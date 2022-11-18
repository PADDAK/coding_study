#include<stdio.h>
#include"test129_source.h"
int main(){
    int radius;
    printf("반지름입력:");
    scanf("%d",&radius);

    printf("%.1lf\n",extent(radius));
    printf("%.1lf\n",circle(radius));
}