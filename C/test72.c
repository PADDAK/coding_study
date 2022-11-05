#include<stdio.h>
int main(){

    /*  int numArr[10];
    numArr[0]=11;
    numArr[1]=22;
    numArr[2]=33;
    numArr[3]=44;
    numArr[4]=55;
    numArr[5]=66;
    numArr[6]=77;
    numArr[7]=88;
    numArr[9]=99;
    numArr[9]=110;

    printf("%d\n",numArr[0]);
    printf("%d\n",numArr[5]);
    printf("%d\n",numArr[9]);   */

   /* int arr[10]={11,22,33,44,55,66,77,88,99,110};
    
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr)/sizeof(int)); */

    int arr[3][4]={{11,22,33,44},{55,66,77,88},{99,110,121,132}};

    int col=sizeof(arr[0])/sizeof(int); //가로 한줄의 크기를 요소의 크기로 나눔=>가로크기
    int row=sizeof(arr)/sizeof(arr[0]); //배열이 차지하는 전체 공간을 가로 한줄의 크기로 나눔=>가로크기

    for(int j=0;j<row;j++){
        for(int k=0;k=col;k++){
        printf("%d",arr[j][k]);
        printf("\n");
    }
    
    }
}