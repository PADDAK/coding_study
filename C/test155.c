#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<float.h>
#include<inttypes.h>

// struct information{
//     int speed;
//     char fuel;
//     double mileage;
//     int temp;
//     int rpm;
// };

// int main(){
//     struct information inf={80,'F',5821.44287,200,1830};
//     printf("Speed:%dKm/h\nFuel:%c\nMielage:%lfkm\nEngine temp:%dC\nRPM:%d\n",inf.speed,inf.fuel,inf.mileage,inf.temp,inf.rpm);
// }
typedef struct _information{
    int speed;
    char fuel;
    double mileage;
    int temp;
    int rpm;
}inf;

int main(){
    inf *p=malloc(sizeof(inf));
    p->speed=80;
    strcpy(p->fuel,'F');
    p->mileage=5821.442871;
    p->temp=200;
    p->rpm=1830;

    printf("%dKm\n%c\n%lfkm\n%dC\n%d\n",p->speed,p->fuel,p->mileage,p->temp,p->rpm);
}