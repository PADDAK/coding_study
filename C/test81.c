#include<stdio.h>

struct group{
    int a;
    double b;
};

int main(){
    struct group g1;

    // g1.a=10;
    // g1.b=1.1234;

    
    // scanf("%d %lf",&g1.a,&g1.b);

    struct group g1={10,11.11};
    printf("g1.a값:%d",g1.a);
    printf("g1.b값:%lf",g1.b);

    return 0;
}