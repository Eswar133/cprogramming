//problems

/*Chef is given two integers AA and CC such that A≤CA≤C.

Chef wants to find whether there exists any integer BB such that A,B,A,B, and CC are in arithmetic progression.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of two space-separated integers AA and CC, the given integers.

Output Format

For each test case, output −1−1 if there exists no integer BB such that A,B,A,B, and CC are in arithmetic progression. Else, output the value of BB.*/







#include<stdio.h>
int main(){
    int t;
    scanf("%i",&t);
    while(t--){
        int a,b;
        scanf("%i %i",&a,&b);
        if(a%2==1 && b%2==1){
            printf("%i\n",((a+b)/2));
        }
        else if(a%2==0 && b%2==0){
            printf("%i\n",((a+b)/2));
        }
        else{
            printf("-1\n");
        }
    }
}
