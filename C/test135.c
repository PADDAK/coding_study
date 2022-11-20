#include<stdio.h>
#include<string.h>

char *my_strcpy(char* dest, const char *src){
    char* ret=dest;
    while((*dest++=*src++)!=0)
        return ret;
}

char *my_strncpy(char* dest, const char *src,size_t n){
    char *ret=dest;

    for(int i=0; i<n;i++){
        if((*dest++=*src++)==0){
            while(++i<n){
                *dest++=0;
            }
            return ret;
        }
    }
    return ret;
}
int main(){
    char str1[20]="Hello";
    char str2[20];

    memset(str2,0x00,20);
    my_strcpy(str2,str1);

    printf("%s \n",str2);
    for(int i=1;i<=strlen(str1);i++){
        memset(str2,0x00,20);
        my_strncpy(str2,str1,1);
        printf("%s\n",str2);
    }

}