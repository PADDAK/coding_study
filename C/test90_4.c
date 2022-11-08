#include<stdio.h>
struct point{
    int x;
    int y;
};
struct student{
    char name[20];
    struct point *link;
};

int main(){
    struct student stu1={"아이유",NULL};
    struct student stu2={"권지용",NULL};
    
    struct point p1={30,40};
    struct point p2={60,80};

    stu1.link=&p1;
    stu2.link=&p2;

    // printf("%s %d %d\n",stu1.name,p1.x,p1.y);
    // printf("%s %d %d\n",stu2.name,p2.x,p2.y);

    printf("%s %d %d\n",stu1.name,stu1.link->x,stu1.link->y);
    printf("%s %d %d\n",stu2.name,stu2.link->x,stu2.link->y);
}