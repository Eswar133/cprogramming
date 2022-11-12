#include<stdio.h>
int studios_ptr(int *p){
    printf("%i %i\n",p,*p);
    *p=250;
}
int main(){
  int a=10;
  studios_ptr(&a);
  printf("%i %i\n",a,&a);
}