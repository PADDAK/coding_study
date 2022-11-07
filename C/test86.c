#include<stdio.h>
struct student{
    char no[10];
    char name[20];
    double math;
    double english;
    double total;
};
int main(){
    int i=0;
    struct student stu[3]={{"2035023","아이유",80,90,0},
                           {"8350923","권지용",80,50,0},
                           {"5091023","창모",70,40,0}};
    
    for(i=0;i<3;i++){
        stu[i].total=stu[i].math+stu[i].english;
        printf("학번:%s\n이름:%s\n,총점:%.2lf\n",stu[i].no,stu[i].name,stu[i].total);
    }
    return 0;
}