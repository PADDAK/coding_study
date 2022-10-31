#include<stdio.h>
#define SIZE 10

int main(){
    char ans1;
    int ans2, i;
    int seat[SIZE]={0};

    while(1){
        printf("좌석을 예약하시겠습니까?(y또는n):");
        scanf("%c",&ans1);

        if(ans1=='y'){
            printf("---------------------\n");
            printf("1 2 3 4 5 6 7 8 9 10\n");
            printf("---------------------\n");

            for(i=0;i<SIZE;i++)
                printf("%d",seat[i]);
            printf("\n");
            printf("몇번째 좌석을 예악하시겠습니까?");
            scanf("%d",&ans2);
            if(ans2<=0 || ans2>SIZE){
                printf("1부터 10사이의 숫자를 입력하세요");
            continue;
        }
        if(seat[ans2-1]==0){
            seat[ans2-1]=1;
            printf("예약되었습니다");
        }
        else{
            printf("이미 예약된 자리입니다\n");
        }
    }
    else if (ans1=='n')
       return 0;
    }

    return 0;
}