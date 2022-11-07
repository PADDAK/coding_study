#include<stdio.h>

typedef struct score{
    double math;
    double english;
    double average;
}SCORE;

struct student{
    int no;
    SCORE s;
};

typedef struct student STUDENT;

int main(void){
    STUDENT stu={12412412,{40,50,0}};
    stu.s.average=(stu.s.math+stu.s.english)/2;
    printf("학번:%d\n",stu.no);
    printf("평균:%.2f",stu.s.average);
}