#include<stdio.h>
int main()
{
    double height, weight, avg;
    avg=(height-100)*0.9;

    printf("키를 입력하시오:");
    scanf("%lf",&height);
    printf("몸무게를 입력하시오:");
    scanf("%lf",&weight);

    if(avg>=weight)
    {
        printf("당신은 비만입니다\n");
        printf("뺴야할 몸무게:%.2f",avg-weight);
     }
    
    else if(avg==weight)
    {
        printf("당신은 적정입니다");
    }

    else
    {
        printf("당신은 저체중입니다\n");
        printf("%f\n", weight);
        printf("%f\n", avg);
        printf("%.2f\n", weight-avg);
        printf("찌워야할 몸무게:%.2f",weight-avg);
    }   

    return 0;
}