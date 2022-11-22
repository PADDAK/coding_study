#include<stdio.h>
int main(){
    int num[9];
    int max,i;
    for(i=0;i<9;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<9;i++){
        if(num[i]>max)
        max=num[i];
    }
    printf("%d\n%d",max,i-1);
}