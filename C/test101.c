#include<stdio.h>
struct student{
    int no;
    char blood[2];
    double sight1;
    double sight2;
    int weight;
};

int main(){
    struct student stu[5]={{123124,"AB",2.4,5.3,43},{1522151,"B",1.2,5,3,12},{982708930,"AB",0.1,0.3,65},{6493930,"O",0.5,0.8,79},{8120312,"A",8.6,9.7,45}};
    int i;
    for(i=0;i<5;i++)
    printf("학번:%d, 혈액형:%s, 왼쪽시력:%.1lf, 오른쪽시력:%.1lf, 몸무게:%d\n",stu[i].no,stu[i].blood,stu[i].sight1,stu[i].sight2,stu[i].weight);

}