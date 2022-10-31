//로또뽑기
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int k,a,b,c;
    srand((unsigned)time(NULL));

    while(1){
        printf("몇번조합?:");
        scanf("%d",&k);

        for(a=1;a<=k;a++){
            for(b=1;b<7;b++)
            printf("%d\t",rand()%45+1);
            printf("\n");
        }
        printf("더할꺼?(예:1,아니:0):");
        scanf("%d",&c);
        
        if(c==1)
        continue;

        if(c==0)
        printf("프로그램종료");
        break;
    }
}