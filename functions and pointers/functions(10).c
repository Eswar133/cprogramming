#include<stdio.h>
int studios_ptr(int *p,int *q,int *s){
    
    printf("%i %i\n",p,*p);
    printf("%i %i\n",q,*q);
    printf("%i %i\n",s,*s);
    *s=*p+*q;
}
int main(){
  int a=10;
  int b=34;
  int c=11;
  studios_ptr(&a,&b,&c);
  printf("%i %i\n",a,&a);
  printf("%i %i\n",b,&b);ś
  printf("%i %i\n",c,&c);
}