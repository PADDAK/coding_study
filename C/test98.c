#include<stdio.h>
int main(){
    char a='A';
    char *ap;
    char **app;
    int b=1;
    int * bp;
    int **bpp;

    ap=&a;
    bp=&b;
    app=&ap;
    bpp=&bp;

    printf("%d %d %d ----- %d %d %d\n",sizeof(a),sizeof(*ap),sizeof(**app),sizeof(b),sizeof(*bp),sizeof(**bpp));
    printf("%d %d %d ----- %d %d %d\n",sizeof(a+1),sizeof(*ap+1),sizeof(**app+1),sizeof(b+1),sizeof(*bp+1),sizeof(**bpp+1));    //출력값왜다4?,
    printf("%d %d %d ----- %d %d %d\n",sizeof(a)+1,sizeof(*ap)+1,sizeof(**app)+1,sizeof(b)+1,sizeof(*bp)+1,sizeof(**bpp)+1);
 
    printf("%d %d %d ----- %d %d %d\n",&a,&ap,&app,&b,&bp,&bpp);
    printf("%d %d %d ----- %d %d %d\n",&a+1,&ap+1,&app+1,&b+1,&bp+1,&bpp+1);
    printf("%d %d %d ----- %d %d %d\n",(&a)+1,(&ap)+1,(&app)+1,(&b)+1,(&bp)+1,(&bpp)+1);

    printf("%c %c %c ----- %d %d %d\n",a,*ap,**app,b,*bp,**bpp);
    printf("%c %c %c ----- %d %d %d\n",a+1,*ap+1,**app+1,b+1,*bp+1,**bpp+1);
    printf("%c %c %c ----- %d %d %d\n",(a)+1,(*ap)+1,(**app)+1,b+1,(*bp)+1,(**bpp)+1);
    printf("%c %x %x ----- %d %x %x\n",a,ap,app,b,bp,bpp);

    int array[3]={1,2,3};
    int *ip;
    int **ipp;

    ip=array;
    ipp=&ip;
    printf("==================================================\n");
    printf("%d %d %d ----- %d %d %d\n\n",array[0],array[1],array[2],array+0,array+1,array+2);
    printf("%d %d %d ----- %d %d %d\n",*ip+0,*ip+1,*ip+2,**ipp+0,**ipp+1,**ipp+2);
    printf("%d %d %d ----- %d %d %d\n",*(ip+0),*(ip+1),*(ip+2),*(*ipp+0),*(*ipp+1),*(*ipp+2));

}