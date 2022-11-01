#include<stdio.h>
int main( ){
    int number,spaces,rows,columns;
    printf("enter no of rows:");
    scanf("%i",&number);
    for (rows=1;rows<=number;rows++)
    {
        for (spaces=1;spaces<=number-rows;spaces++)
        {
            printf(" ");
        }
		for (columns=1;columns<=rows;columns++)
		{
			printf("* ");
        }
		printf("\n");
    }
    for (rows=1;rows<number;rows++)
    {
        for (spaces=1;spaces<=rows;spaces++){
			printf(" ");}
        for (columns=rows;columns<(number-1);columns++){
			printf("* ");}
        printf("\n");
    }
}
