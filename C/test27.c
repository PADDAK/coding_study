#include<stdio.h>
int main()
{
    int month, day;
    printf("달을 입력하시오:");
    scanf("%d",&month);

    switch(month)
    {
        case 2:
        day=28;
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        day=30;
        break;

        default:
        day=31;
        break;    
    }
printf("%d월의 일수는 %d입니다",month,day);
}