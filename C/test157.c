#include<stdio.h>
#include<string.h>
struct point2D{
    int x;
    int y;
};

int main(){
    struct point2D p1;
    memset(&p1,0,sizeof(struct point2D));
    printf("%d %d",p1.x,p1.y);
    return 0;
}