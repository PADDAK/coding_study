#include<stdio.h>
#include<string.h>
struct point{
    int x;
    int y;
};
int main(){
    struct point p1;
    struct point p2;

    p1.x=10;
    p1.y=20;

    memcpy(&p2,&p1,sizeof(struct point));
    printf("%d %d",p2.x,p2.y);
    
}
//memcpy(목적지포인터,원본포인터,크기)
//메모리 안씀->주소만 복사