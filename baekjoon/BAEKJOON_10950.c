#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    int b[a],c[a];
    for(i=1;i<=a;i++){
        scanf("%d %d",&b[i],&c[i]);
    }
    for(i=1;i<=a;i++){
        printf("%d\n",b[i]+c[i]);
    }
}