#include<stdio.h>
struct student{
    char no[0];
    char name[20];
    double math;
    double english;
    double total;
};

int main(void){
    struct student stu1={2035023,"아이유",80,90,0};
    struct student stu2={8350923,"권지용",80,50,0};
    struct student stu3={5091023,"창모",70,40,0};

    stu1.total=stu1.math+stu1.english;
    stu2.total=stu2.math+stu2.english;
    stu3.total=stu3.math+stu3.english;
    
}