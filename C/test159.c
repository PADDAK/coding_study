#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct point{
    int x;
    int y;
};
int main(){
    struct point *p1=malloc(sizeof(struct point));
    struct point *p2=malloc(sizeof(struct point));
    p1->x=10;
    p1->y=20;

    memcpy(p2,p1,sizeof(struct point));

    printf("%d %d",p2->x,p2->y);

    free(p1);

}