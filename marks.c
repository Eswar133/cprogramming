#include<stdio.h>

int main (){
    int marks;
    printf("Enter the number of marks:");
    scanf("%i",&marks);
    if (marks>90)
            printf("Ex");
    else if (marks > 80)
            printf("A");
    else if (marks >70)
            printf("B");
    else if (marks > 60)
            printf("C");
    else if (marks >40)
            printf("D");
    else 
            printf("Fail");
            
    return 0;

}