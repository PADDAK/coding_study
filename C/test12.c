#include<stdio.h>
int main()
{
    char a;
    printf("문자를 입력하시오(q입력시 종료):");
    scanf("%c",&a);

    for(;;)
    {
        scanf("%c",&a);
        if(a=='q')
        break;
    }
    printf("반복문종료");

}