#include<stdio.h>
int studios_ptr(int *p,int *q){
    printf("%i %i\n",p,*p);
    printf("%i %i\n",q,*q);
    *p=250;
    *q=17113;
}
int main(){
  int a=10;
  int b=34;
  studios_ptr(&a,&b);
  printf("%i %i\n",a,&a);
  printf("%i %i\n",b,&b);
}