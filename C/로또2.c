//로또
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    int a,b,i,j;
    b=1;

    while(b){
        printf("몇개조합?:");
        scanf("%d",&a);
        srand((unsigned)time(NULL));
        {
        for(j=0;j<a;j++)
        {
            for(i=0;i<6;i++)
            {
                printf("%d\t",rand()%45+1);
            }printf("\n");
        }
        printf("더할래?(네:1,아니오:0):");
        scanf("%d",&b);
        }
    }

}