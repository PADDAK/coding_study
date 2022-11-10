#include<stdio.h>
int main()
{
  int a=1;
  double b=3.3;
  char c='A';

  int *ap=&a;
  double *bp=&b;
  char *cp=&c;

  int **app=&ap;
  double **bpp=&bp;
  char **cpp=&cp;
  

  printf("%d %.1lf %c\n",a,b,c);
  printf("%d %.1lf %c\n",*&a,*&b,*&c);
  printf("%d %.1lf %c\n",*ap,*bp,*cp);
  printf("%d %.1lf %c\n",**app,**bpp,**cpp);
  

  printf("%x %x %x\n",&a,&b,&c);
  printf("%x %x %x\n",ap,bp,cp);
  printf("%x %x %x\n",*&ap,*&bp,*&cp);
  printf("%x %x %x\n",*app,*bpp,*cpp);
  

}