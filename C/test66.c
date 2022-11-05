#include<stdio.h>
int main(){
    int array[][3]={10,20,30,40,50,60};
    int (*p)[3];

    p=array;
    printf("%d %d %d\n%d %d %d",p[0][0],p[0][1],p[0][2],p[1][0],p[1][1],p[1][2]);
}