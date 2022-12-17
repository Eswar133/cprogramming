/*Problem

On every CodeChef user's profile page, the list of problems that they have set, tested, and written editorials for, is listed at the bottom.

Given the number of problems in each of these 33 categories as X,Y,X,Y, and ZZ respectively (where all three integers are distinct), find if the user has been most active as a Setter, Tester, or Editorialist.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of three space-separated integers X,Y,X,Y, and ZZ - the number of problems they have set, tested, and written editorials for.
*/
#include <stdio.h>

int main(void) {
	int t;
	scanf("%i",&t);
	while(t--){
	    int a,b,c;
	    scanf("%i %i %i",&a,&b,&c);
	    if(a>b&&a>c){
	        printf("Setter\n");
	    }
	    else if(b>c){
	        printf("Tester\n");
	    }
	    else{
	        printf("Editorialist\n");
	    }
	}
	return 0;
}


