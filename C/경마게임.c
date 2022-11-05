#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    int i,a;    //a:더할지말지변수
    int horse, money, money1, money2, money3, money4;   //horse:선택말 money:초기보유돈 money1:배팅금액 money2:배팅성공한돈, money3=배팅후남은돈 money4=배팅후남은돈+배팅성공한돈
    srand(time(NULL));

    printf("----경주마도박-----\n");
    printf("가진돈?:");
    scanf("%d",&money);

    while(a){
        printf("얼마배팅?:");
        scanf("%d",&money1);

        money3=money-money1;
        while(money1>money){
            printf("배팅금액이 가진돈보다 많다. 다시써라:");
            scanf("%d",&money1);
        }
        printf("1번:15배\t 2번:10배\t 3번:6배\t 4번:3배\t 5번:2배\n");
        printf("몇번말:");
        scanf("%d",&horse);
        if(horse==1)
            money2=money1*15;
        else if(horse==2)
            money2=money1*10;
        else if(horse==3)
            money2=money1*6;
        else if(horse==4)
            money2=money1*3;
        else
            money2=money1*2;

        printf("-----게임시작-----\n");

        for (i=1;i<=4;i++) {
            printf("말달리는중...\n");
            sleep(1);
        }

        printf("☆★☆★☆★%d번말우승☆★☆★☆★\n",rand()%5+1);
    
        if(horse==rand()%5+1){
            printf("축하합니다! %d원만큼 따셨습니다!\n",money2);
            money4=money3+money2;
            sleep(1);
            printf("현재보유돈:%d원\n",money4);
        }
        else{
            printf("ㅠㅠ실패\n");
            sleep(1);
            money4=money3;
            printf("현재보유돈:%d원\n",money4);
            if(money3<=0){
                printf("돈이없네! 잘가!");
                break;
            }
        }
        printf("더할래?(예:1, 아니:2):");
        scanf("%d",&a);

        if(a!=1){
            printf("잘가!");
            break;
        }
        money=money4;
    }
}