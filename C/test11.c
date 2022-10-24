//선택지많은경우
#include<stdio.h>
int main()
{
    int a;
    printf("1~3중 번호를 누르시오:");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        printf("전등켜짐");
        break;

        case 2:
        printf("전등꺼짐");
        break;

        case 3:
        printf("고장");
        break;

        default:
        printf("1~3번중 입력하시오");
        break;
    }
}