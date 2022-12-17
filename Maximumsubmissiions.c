/*Problem

A participant can make 11 submission every 3030 seconds. If a contest lasts for XX minutes, what is the maximum number of submissions that the participant can make during it?

It is also given that the participant cannot make any submission in the last 55 seconds of the contest.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of a single integer XX, denoting the number of minutes.
*/
#include <stdio.h>

int main(void) {
	int t;
	scanf("%i",&t);
	while(t--){
	    int a;
	    scanf("%i",&a);
	    printf("%i\n",a*2);
	}
	return 0;
}


