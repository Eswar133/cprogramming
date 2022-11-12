#include<stdio.h>
void pointers(int p,int q){
    p*p;
    printf("\np:%i adress:%i ",p,&p);
    p=p*p;
    printf("a*a %i\n",p);
    q=q*q; 
    printf("b*b %i\n",q);
}
int main(){
    int a,b;
    a=34;
    b=54;
    printf("a:%i b:%i",a,b);
    pointers(a,b);
    
}