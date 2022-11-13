#include<stdio.h>
int p=10;
void maximum(int  a,int b,int c ){
    if ((a>b)&&(a>c)){
        printf("%i",a);
    }
    else if((b>c)&&(b>a)){
        printf("%i",b);
    }
    else if ((c>b)&&(c>a)){
        printf("%i",c);
    }
    else {
        printf("%i",a);
    }
    printf("%i",p);
    
    
}
int main(){
    int a,b,c;
    a=60;
    b=30;
    c=54;
    maximum(a,b,c);
}