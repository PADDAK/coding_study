#include<stdio.h>
#include<string.h>
int main(){
    char array1[50];
    int num1=100;
    double num2=3.14;
    char str[50]="good-morning";

    printf("%d %lf %s\n",num1,num2,str);
    sprintf(array1,"%d %lf %s",num1,num2,str);
    printf("%s",array1);
}