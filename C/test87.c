#include<stdio.h>
struct student{
    char no[10];
    char name[20];
    double total;
};

int main(){
    struct student stu[3];
    int i=0;

    for(i=0;i<3;i++){
        printf("학번,이름,총점순으로 입력:");
        scanf("%s,%s,%lf",stu[i].no,stu[i].name,&stu[i].total);
    }
    printf("\n");
    printf("학생정보출력:\n");

    for(i=0;i<3;i++){
        printf("%s,%s,%.2lf\n",stu[i].no,stu[i].name,stu[i].total);
    }
}