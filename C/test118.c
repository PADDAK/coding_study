#include<stdio.h>
int main(){
    int array[10];
    int i;
    for(i=0;i<10;i++)
    scanf("%d",&array[i]);
    
    scanf("%d",&i);
    printf("%d",array[i-1]);
}