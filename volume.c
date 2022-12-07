#include <stdio.h>

int main(void) {
	int t;
	scanf("%i",&t);
	for (int i=0;i<t;i++){
	    int x,y;
	    scanf("%i %i",&x,&y);
	    if(x>=y){
	        printf("%i\n",x-y);
	    }
	    else{
	        printf("%i\n",y-x);
	    }
	    
	}
	return 0;
}


