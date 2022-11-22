#include<stdio.h>
int main(){
    int sum,n,i;

    scanf("%d",&sum); //총금액
    scanf("%d",&n); //물건종류수

    int a1[n],a2[n];
    int result=0;

    for(i=0;i<n;i++){
        scanf("%d %d",&a1[i],&a2[i]);
        result=a1[i]*a2[i]+result;
    }
    
    if(sum==result){
        printf("Yes");
    }
    else{
        printf("No");
    }

}