#include<stdio.h>

int main(){

	
	
	// MAIN BLOCKER
	// TRIGGERING EOF DURING EXECUTION FOR REAL-TIME INPUT STREAM
	// PRESSING ENTER ONLY makes getchar() = '\n'
	// OBSERVATION : THE PROGRAM RECOGNISES \n internally and takes the cursor to the next line.
	
	// SOLUTION - TRIGGER EOF BY PRESSING CTRL+D 
	// ASCII of \n is 10, getchar() takes the \n as well obviously, just stating.
	
	int isGetCharNotEqualsEOF = 1,k;
	printf("isGetCharEqualsEOF before input starts %d\n",isGetCharNotEqualsEOF);
	
	for(; isGetCharNotEqualsEOF = ((k = getchar()) != EOF) ;)
		printf(" isGetCharNotEqualsEOF %d and k value %d\n",isGetCharNotEqualsEOF,k);
		
	
	printf("isGetCharNotEqualsEOF after Ctrl+D %d => EOF reached.\n",isGetCharNotEqualsEOF);
		
	
	
		
	
}
