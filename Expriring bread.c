/*Problem

Eikooc loves bread. She has NN loaves of bread, all of which expire after exactly MM days. She can eat upto KK loaves of bread in a day. Can she eat all the loaves of bread before they expire?
Input Format

    The first line contains a single integer TT - the number of test cases. Then the test cases follow.
    Each test case consists of a single line containing three integers NN, MM and KK - the number of loaves of bread Eikooc has, the number of days after which all the breads will expire and the number of loaves of bread Eikooc can eat in a day.


*/
//solution:

#include <stdio.h>

int main(void) {
	int t;
	scanf("%i",&t);
	while(t--){
	    int a,b,c;
	    scanf("%i %i %i",&a,&b,&c);
	    if(a<=b*c){
	        printf("Yes\n");
	        
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}


