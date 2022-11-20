//최대공약수
#include<stdio.h>
int GCD(int a, int b);
int main(){
    int a,b,result;
    printf("두수입력:");
    scanf("%d %d",&a,&b);

    result=GCD(a,b);
    printf("%d",result);
}

int GCD(int a, int b){
    int i,gcd;
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0)
        gcd=i;
    }
    return gcd;
}