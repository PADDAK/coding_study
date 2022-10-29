#include<stdio.h>
int main()
{
    int month, day;
    printf("달을 입력하시오:");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
        printf("1월의 일수는 31입니다");
        break;

        case 2:
        printf("2월의 일수는 28입니다");
        break;

        case 3:
        printf("3월의 일수는 31입니다");
        break;

        case 4:
        printf("4월의 일수는 30입니다");
        break;

        case 5:
        printf("5월의 일수는 31입니다");
        break;

        case 6:
        printf("6월의 일수는 30입니다");
        break;

        case 7:
        printf("7월의 일수는 31입니다");
        break;

        case 8:
        printf("8월의 일수는 31입니다");
        break;

        case 9:
        printf("9월의 일수는 30입니다");
        break;

        case 10:
        printf("10월의 일수는 31입니다");
        break;

        case 11:
        printf("11월의 일수는 30입니다");
        break;

        case 12:
        printf("11월의 일수는 31입니다");
        break;
    }
}