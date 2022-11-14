#include<stdio.h>
#include<string.h>
int main(){
    char array1[50]="100 3.14 Good-morning";
    char array2[50]="200 4.25 Good-night";
    char array3[50]="300 5.36 Good-afternoon";

    int num1;
    double num2;
    char str[50];

    sscanf(array3,"%d %lf %s",&num1,&num2,str);
    puts("출력");
    printf("%d %lf %s",num1,num2,str);
}