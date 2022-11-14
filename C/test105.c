#include<stdio.h>
#include<string.h>
int main(){
    char array1[12]="Hello World";
    char array2[12];
    char array3[12];

    strcpy(array2, array1);
    strncpy(array3, array1,7);

    puts(array2);
    puts(array3);
}