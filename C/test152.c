#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct _person{
    char name[20];
    int age;
    char address[100];
}person;

int main(){
    person *p1=malloc(sizeof(person));
    strcpy(p1->name,"아이유");
    p1->age=30;
    strcpy(p1->address,"서울시");

    printf("이름:%s\n",p1->name);
    printf("나이:%d\n",p1->age);
    printf("주소:%s\n",p1->address);

    free(p1);
    
}