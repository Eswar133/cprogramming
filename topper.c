#include <stdio.h>
int main(){
    int a,b,c,first,second,third,fourth,fifth,sixth,seventh;
    printf("enter a:");
    scanf("\n%i",&a);
    printf("enter b:");
    scanf("\n%i",&b);
    printf("enter c:");
    scanf("\n%i",&c);
    first=(a>b)&&(a>c);
    second=(b>a)&&(b>c);
    third=(c>a)&&(c>b);
    fourth=(a==b)&&(a!=c);
    fifth=(b==c)&&(a!=b);
    sixth=(a==c)&&(a!=b);
    seventh=(a==b==c);
    if (first)
            printf("A is topper");
    else if (second)
            printf("B is topper");
    else if (third)
            printf("C is topper");
    else if (fourth)
            printf("A,B are toppers");
    else if (fifth)
            printf("B,C are toppers");
    else if (sixth)
            printf("A,C are toppers");
    else 
            printf("A B C are the toppers ");
    return 0;
    
}