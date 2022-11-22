#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int max,min;
    scanf("%d",&n);

    int *np=(int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++){
        scanf("%d",&np[i]);
    }

    for(int i=0;i<n;i++){
        if(np[i]>max){
            max=np[i];
        }
        if(np[i]<min){
            min=np[i];
        }
    }

    printf("%d %d",min,max);

    free(np);
}