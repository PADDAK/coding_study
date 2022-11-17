#include<stdio.h>
#define size 5

void bubble(int *arr);

int main(){
    int array[size];
    int i;
    
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);

    for(i=0;i<size;i++){
        bubble(array);
        printf("%d ",array[i]);
    }
}

void bubble(int *arr){
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
}
