//배열이용 n명 총점,평균
#include<stdio.h>
int main(){
    int n,a,result1,result2;
    
    printf("학생몇명?:");
    scanf("%d",&n);
    int student[n];
    result1=0;

    for(a=0;a<n;a++){
        printf("%d번째 학생 성적:",a+1);
        scanf("%d",&student[a]);
    }

    for(a=0;a<n;a++){
        result1+=student[a];
    }

    result2=result1/n;

    printf("%d명의 총점:%d,평균:%.2lf",n,result1,(double)result2);
}