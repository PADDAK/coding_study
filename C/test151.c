#include<stdio.h>
struct member{
    char *name;
    int age;
    double weight;
};
int main(){
    int i;
    struct member m[3];

    m[0].name="권지용";
    m[0].age=21;
    m[0].weight=66.5;

    m[1].name="아이유";
    m[1].age=25;
    m[1].weight=52.3;

    m[2].name="이찬혁";
    m[2].age=28;
    m[2].weight=55;

    for(i=0;i<3;i++){
        printf("%s %d %.1lf\n",m[i].name,m[i].age,m[i].weight);
    }

    return 0;
}