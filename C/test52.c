#include<stdio.h>
int main(void){

    int array[3]={10,20,30};
    int i=0;
    int* p=NULL;

    p=array;

    printf("%x %x %x\n",array,array+0,&array[0]);
    printf("%x %x\n",array+1,&array[1]);
    printf("%x %x\n",array+2,&array[2]);

    printf("%d %d %d\n", sizeof(array),sizeof(array+0),sizeof(&array[0]));
    
    printf("--------------------------------------------\n");
    
    printf("%d %d %d\n",*array,*array+0,*&array[0]);
    printf("%d %d\n",*(array+1),*&array[1]);
    printf("%d %d\n",*(array+2),*&array[2]);

    printf("%d %d %d\n", sizeof(*array),sizeof(*(array+0)),sizeof(*&array[0]));

    printf("--------------------------------------------\n");

    for(i=0;i<3;i++){
        printf("%d %d %d\n",*(p+i),*&p[i],p[i]);
    }
    for(i=0;i<3;i++){
        printf("%d %d %d\n",*(array+i),*&array[i],array[i]);
    }


    return 0;
}


