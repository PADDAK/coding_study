#include<stdio.h>
#include<stdlib.h>

int main(){
    char *p_name=malloc(sizeof(char)*3);

    p_name[0]='a';
    p_name[1]='b';
    p_name[2]='c';

    printf("%s\n",p_name);

    free(p_name);

    return 0;
}