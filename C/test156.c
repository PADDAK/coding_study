#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct point2D{
    int x;
    int y;
};

int main(){
    struct point2D *p1=malloc(sizeof(struct point2D));  //구조체크기만큼 메모리할당
    memset(p1,0,sizeof(struct point2D));  //p1을 구조체크기만큼 0으로 설정->구조체크기를0으로만듬

    printf("%d %d\n",p1->x,p1->y);
    free(p1);
}

// //번거로운 초기화작업 안하려고 함
// struct 구조체이름 변수이름={0}:구조체 변수내용 0으로 모두 초기화
// 문제가 있슴:malloc함수로 할당메모리에는 사용안됨
// 그래서 memset(구조체포인터,설정값,sizeof(구조체))