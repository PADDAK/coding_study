//3등 이름 나오게하기   내림차순정렬후 배열에 새롭게 저장됨->stu[2].name 출력
#include<stdio.h>
int n; //n:학생수
struct student{
    int grade;
    char name[20];
};

void bubble(int *arr);

int main(){
    int i;      //i:for문사용
    
    printf("학생몇명?");
    scanf("%d",&n);

    struct student stu[n];

    printf("정보 입력하시오:");
    for(i=0;i<n;i++)
    scanf("%s %d",stu[i].name,&stu[i].grade);

    bubble(&stu[i].grade);
    printf("%d\n",stu[2].grade);    //구조체에 정수만 내림차순해도 문자열도 같이 바뀌나
}

void bubble(int *arr){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
