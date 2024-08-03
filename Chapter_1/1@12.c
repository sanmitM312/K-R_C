#include<stdio.h>

#define IN  1
#define OUT 0

/*
 Write a program that prints one word per line.
*/
int main(){

	int c,STATE;
	
	
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t'){
			if(STATE == IN)putchar('\n');
			STATE = OUT;
		}else if(STATE == OUT){
			STATE = IN;
		}
		
		if(STATE == IN){
			putchar(c);
		}
	}
}

/* FLAW : DOES NOT HANDLE PUNCTUATIONS
   Ex
   I/P Hi, I am SANMIT
   O/P
	Hi,
	I
	am 
	SANMIT
   instead of 
   	Hi
   	,
   	I
   	am
   	SANMIT
*/   
