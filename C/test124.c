#include<stdio.h>
#define MUL(x,y)x*y

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",MUL(a,b));
    printf("%d\n",MUL((a+1),(b+1)));
}