#include<stdio.h>
struct student{
    char name[20];
    char no[20];
    int korean;
    int math;
    int english;
    int science;
};

int total(int a);
int average(int a);

int main(){
    int i,a,result1,result2;    //i:학생수 result1:총점 result2:평균
    struct student stu[10];

    for(i=0;;i++){
        printf("이름입력:");
        scanf("%s",stu[i].name);
        printf("학번입력:");
        scanf("%s",stu[i].no);
        printf("국어:");
        scanf("%d",&stu[i].korean);
        printf("수학:");
        scanf("%d",&stu[i].math);
        printf("영어:");
        scanf("%d",&stu[i].english);
        printf("과학:");
        scanf("%d",&stu[i].science);

        printf("더입력?(예:1,아니:2):");
        scanf("%d",&a);

        if(a!=1)
        break;        
    }

    result1=total(a);
    result2=average(a);

    printf("이름입력:%s",stu[i].name);
    printf("총점:%d\n평균:%d",result1,result2);

}

int total(int a){
    int i;
    struct student stu[i];
    return stu[i].korean+stu[i].math+stu[i].english+stu[i].science;
}

int average(int a){
    int b;
    return total(b)/4;
}