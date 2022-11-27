#include<stdio.h>
struct student{
    int no[20];
    char name[20];
    int num;
};
int main(){
    struct student stu={12312,"아이유",00000};
    struct studnet *p=NULL;
    p=&stu;

    printf("%d %s %d\n",p->no,p->name,p->num);
    printf("%d %s %d\n",(*p).no,(*p).name,(*p).num);
}