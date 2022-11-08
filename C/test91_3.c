#include<stdio.h>
struct point{
    int x;
    int y;
};

struct point function(void);
int main(){
    struct point p;
    p=function();
    printf("%d %d\n",p.x,p.y);

    return 0;
}

struct point function(void){

    struct point call={10,20};
    return call;
}