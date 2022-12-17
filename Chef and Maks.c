/*Problem

Chef is shopping for masks. In the shop, he encounters 22 types of masks:

    Disposable Masks — cost XX but last only 11 day.
    Cloth Masks — cost YY but last 1010 days.

Chef wants to buy masks to last him 100100 days. He will buy the masks which cost him the least. In case there is a tie in terms of cost, Chef will be eco-friendly and choose the cloth masks. Which type of mask will Chef choose?
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases. Then the test cases follow.
    Each test case consists of a single line of input, containing two space-separated integers X,YX,Y.
*/

#include <stdio.h>

int main(void) {
	int t;
	scanf("%i",&t);
	while(t--){
	    int a,b;
	    scanf("%i %i",&a,&b);
	    a=a*100;
	    b=b*10;
	    if(a==b){
	        printf("Cloth\n");
	    }
	    else if(a<b){
	        printf("Disposable\n");
	    }
	    else{
	        printf("Cloth\n");
	    }
	}
	return 0;
}


