#include<stdio.h>
int main(){
    int student[10],i,sum=0;

    for(i=0;i<10;i++){
        printf("%d번째 학생의점수",i+1);
        scanf("%d",&student[i]);
    }

    for(i=0;i<10;i++){
        sum+=student[i];
    }
    printf("총점:%d,평균:%lf",sum,(double)sum/10);
}