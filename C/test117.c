#include<stdio.h>
int main(){
    int n,i;

    scanf("%d",&n);
    int array[n];

    for(i=1;i<=n;i++)
    scanf("%d",&array[i]);

    for(i=1;i<=n;i++)
    printf("%d\n",array[i]);
    for(i=1;i<=n;i++)
    printf("%d\n",array[i]);
}