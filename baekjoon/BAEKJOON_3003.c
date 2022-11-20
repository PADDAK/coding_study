#include<stdio.h>
int main(){
    int king=1,queen=1,rook=2,vishop=2,night=2,porn=8;
    int king1,queen1,rook1,vishop1,night1,porn1;
    scanf("%d %d %d %d %d %d",&king1,&queen1,&rook1,&vishop1,&night1,&porn1);
    
    printf("%d %d %d %d %d %d",king-king1,queen-queen1,rook-rook1,vishop-vishop1,night-night1,porn-porn1);
}