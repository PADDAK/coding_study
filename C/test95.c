#include<stdio.h>
struct point{
    int x;
    int y;
};
int main(){
    struct point s1;
    struct point *sp;
    s1.x=10;
    s1.y=10;

    sp=&s1;
   

    printf("%d %d %x\n",s1.x,s1.y,sp);
    printf("%d %d",sp->x,sp->y);
}