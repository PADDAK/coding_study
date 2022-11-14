//버블정렬
#include<stdio.h>
#define len 5

void bubble(int *arr);

int main(){
    int arr[len]={7,5,1,4,3};
    int i;
    printf("정렬전:");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    bubble(arr);
    printf("정렬후:");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubble(int *arr){
    int i,j,temp;
    for(i=0;i<len;i++){
        for(j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
}
