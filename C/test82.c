#include<stdio.h>
struct score{
    double math;
    double english;
    double total;
};
struct student{
    int no;
    struct score s;
};

int main(void){
    struct student stu={123124124,{70,80,0}};;

    // stu.no=1771012007;
    // stu.s.math=90;
    // stu.s.english=80;
    
    stu.s.total=stu.s.math+stu.s.english;

    printf("학번:%d\n",stu.no);
    printf("총점:%lf",stu.s.total);

    return 0;
}
