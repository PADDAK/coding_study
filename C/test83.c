#include<stdio.h>
struct score{
    double math;
    double english;
    double total;
};
struct student{
    int no;
    struct score s;
};

int main(void){
    struct student stu;

    printf("학번입력:");
    scanf("%d",&stu.no);
    printf("수학입력:");
    scanf("%lf",&stu.s.math);
    printf("영어입력:");
    scanf("%lf",&stu.s.english);

    stu.s.total=stu.s.math+stu.s.english;

    printf("총합:%.2lf",stu.s.total);
}