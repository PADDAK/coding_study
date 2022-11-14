#include<stdio.h>
int main(){
    int array[3]={10,20,30};
    int *ap;
    ap=array;

    int i;

    for(i=0;i<3;i++){
    printf("%d %d %d %d\n",*ap,array+i,*(ap+i),ap[i]);
    }
}