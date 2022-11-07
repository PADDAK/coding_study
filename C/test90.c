#include<stdio.h>
struct student{
    char no[10];
    char name[20];
    double total;
};

int main(void){
    struct student stu={"235235","호호호",0};
    struct student *p=NULL;
    struct student **pp=NULL;

    p=&stu;
    pp=&p;

    printf("%s %s %lf\n",stu.no,stu.name,stu.total);

    printf("%s %s %lf\n",(*p).no,(*p).name,(*p).total);     //1치원 포인터로접근
    printf("%s %s %lf\n",p->no,p->name,p->total);           //1치원 포인터로접근

    printf("%s %s %lf\n",(**pp).no,(**pp).name,(**pp).total);       //2차원포인터로접근
    printf("%s %s %lf\n",(*pp)->no,(*pp)->name,(*pp)->total);       //2차원포인터로접근

}