/*Problem

Alice, Bob and Charlie are bidding for an artifact at an auction.
Alice bids AA rupees, Bob bids BB rupees, and Charlie bids CC rupees (where AA, BB, and CC are distinct).

According to the rules of the auction, the person who bids the highest amount will win the auction.
Determine who will win the auction.
Input Format

    The first line contains a single integer TT — the number of test cases. Then the test cases follow.
    The first and only line of each test case contains three integers AA, BB, and CC, — the amount bid by Alice, Bob, and Charlie respectively.*/
    
//solution
#include <stdio.h>

int main(void) {
	int t;
	scanf("%i",&t);
	while(t--){
	    int alice ,bob ,charlie;
	    scanf("%i %i %i",&alice,&bob,&charlie);
	    if(alice>=bob&& alice>=charlie){
	        printf("Alice\n");
	    }
	    else if(bob>=charlie){
	        printf("Bob\n");
	    }
	    else{
	        printf("Charlie\n");
	    }
	    
	}
	return 0;
}



