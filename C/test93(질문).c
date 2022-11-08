//n개의 배열선언하고 거기에 데이터 저장하는방법
#include<stdio.h>
int main(){
    int n,i,a;
    int arr[n];

    for(n=0;;n++){
        printf("arr[%n]저장값:",n);
        scanf("%d",&i);

        printf("더?");
        scanf("%d",&a);

        if(a==1)
        break;

        
    }
    printf("------------------");
    printf("몇번째arr[%d]?:");
    scanf("%d",&arr[n]);

    printf("arr[%d]값:%d",n,&arr[n]);
}