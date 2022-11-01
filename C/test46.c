//n명의 총점
#include<stdio.h>
int main(){
    int n,a,grade,result1,result2;
    int sum=0;

    printf("학생몇명?:");
    scanf("%d",&n);
    for(a=1;a<=n;a++){

            printf("성적:");
            scanf("%d",&grade);
            sum+=grade;
        }
    printf("%d명의 총점:%d",n,sum);
}