//while구구단
#include<stdio.h>
int main(){
    int i=1;
    while(i<10){
        int j=1;
        while(j<10){
        printf("%d*%d=%d\n",i,j,i*j);
        j++;
        }
    }
    i++;
    printf("\n");
}