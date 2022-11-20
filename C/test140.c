#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,result;
    int avrage=0;
    printf("몇개과목?:");
    scanf("%d",&n);
    int *arr=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        printf("점수입력:");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        avrage=arr[i]+avrage;
    }
    result=avrage/n;
    printf("평균:%d",result);

    free(arr);
}