#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,v;
    int count=0;
    scanf("%d",&n);
    int *np=(int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++){
        scanf("%d",&np[i]);
    }
    
    scanf("%d",&v);
    for(int i=0;i<n;i++){
        if(np[i]==v){
            count++;
        }
    }
    printf("%d",count);
    free(np);
}