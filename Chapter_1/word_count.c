#include<stdio.h>

/*
	A word is any sequence of characters that does not contain a blank, tab or newline.
*/

#define IN 	1
#define OUT 	0

int main(){
	
	int nc,nw,nl,c; // no. of chars, words, lines
	int STATE = OUT; // 0 means out 
	
	nc = nw = nl = 0;
	while((c = getchar()) != EOF){
		++nc;
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\t' || c == '\n')
			STATE = OUT;
		else if(STATE == OUT) {
			STATE = IN;
			++nw;
		}
	}
	
	printf("\nNumber of character: %d, words: %d, lines: %d\n", nc,nw,nl);
}
