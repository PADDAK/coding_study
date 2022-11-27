#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct person{
    char name;
    int age;
    char address;
};
int main(){
    struct person *p[3000];
    for(int i=0;i<sizeof(p)/sizeof(struct person*);i++){
        p[i]=malloc(sizeof(struct person));
        memset(p[i],0,sizeof(struct person));
    }

    printf("%d\n",p[2000]->age);

    for(int i=0;i<sizeof(p)/sizeof(struct person*);i++){
        free(p[i]);
    }
}