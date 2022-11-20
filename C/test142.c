#include<stdio.h>
#include<stdlib.h>

void InputScores(int *base, int asize);
void ViewScores(int *base, int asize);
int InputScore(int num);
int main(){
    int *base=0;
    int max_stu=0;
    printf("관리학생수입력:");
    scanf("%d",&max_stu);
    base=(int*)malloc(sizeof(int)*max_stu);
    InputScores(base,max_stu);
    ViewScores(base,max_stu);

    free(base);
    return 0;
}

void Inputscores(int *base,int asize){
    int i=0;
    for(i=0;i<asize;i++){
        base[i]=InputScore(i+1);
    }
}

void ViewScores(int *base, int asize){
    int i=0;
    for(i=0;i<asize;i++){
        printf("%d번:%d\n",i+1,base[i]);
    }
}

int InputScore(int num){
    int score;
    printf("%d번의 성적 입력\n",num);
    scanf("%d",&score);

    return score;
}