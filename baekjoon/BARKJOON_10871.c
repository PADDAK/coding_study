#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int *p=(int*)malloc(sizeof(int)*a);

    for(int i=0;i<a;i++){
        scanf("%d",&p[i]);
    }

    for(int i=0;i<a;i++){
        if(p[i]<b){
            printf("%d ",p[i]);
        }
    }

    free(p);
}