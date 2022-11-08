#include<stdio.h>
struct student{
    int no;
    char blood[2];
    double sight1,sight2;
    int weight;
};

int main(){
    struct student stu[5];
    int i;

    for(i=0;i<5;i++){
        printf("학번:");
        scanf("%d",&stu[i].no);
        printf("혈액형:");
        scanf("%s",stu[i].blood);
        printf("시야(좌):");
        scanf("%lf",&stu[i].sight1);
        printf("시야(우):");
        scanf("%lf",&stu[i].sight2);
        printf("몸무게:");
        scanf("%d",&stu[i].weight);
    }

    for(i=0;i<5;i++){
        printf("학번:%d 혈액형:%s, 시야(좌):%.1lf ,시야(우):%.1lf, 몸무게:%d",stu[i].no,stu[i].blood,stu[i].sight1,stu[i].sight2,stu[i].weight);
    }
}      