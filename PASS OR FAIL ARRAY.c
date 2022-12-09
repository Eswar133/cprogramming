//Problem

//Chef is struggling to pass a certain college course.

//The test has a total of NN question, each question carries 33 marks for a correct answer and −1−1 for an incorrect answer. Chef is a risk-averse person so he decided to attempt all the questions. It is known that Chef got XX questions correct and the rest of them incorrect. For Chef to pass the course he must score at least PP marks.

//Will Chef be able to pass the exam or not?
//Input Format

  //  First line will contain TT, number of testcases. Then the testcases follow.
  //Each testcase contains of a single line of input, three integers N,X,PN,X,P.
#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x,p;
	    scanf("%d %d %d",&n,&x,&p);
	    if((4*x)-n>=p)
	    {
	        printf("PASS\n");
	    }
	    else
	    {
	        printf("FAIL\n");
	    }
	}
	return 0;
}



