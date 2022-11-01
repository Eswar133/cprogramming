#include<stdio.h>
int main(){
int rows,columns,spaces,number;
printf("enter any integer:");
scanf("%d",&number);
for (rows=1;rows<=number;rows++)
{
    for (spaces=1;spaces<=number-rows;spaces++){
        printf(" ");
    }
    for (columns=1;columns<=rows;columns++){
        printf("* ");

    }
    printf("\n");
}
return 0;
