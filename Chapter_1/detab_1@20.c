#include<stdio.h>

#define TABSTOP 3

// tabstops are fixed positions in the console
// where after pressing the tab key the cursor moves to
// that's why sometimes after pressing tab it does not always go 4 spaces 
// in the console, sometimes < 4 spaces it moves.

// used @ for better visualization.
int main(){
	
	int c,charcc = 0;
	
	while((c = getchar()) != EOF){	
		++charcc;
		if(c == '\n')charcc = 0;
			
		if(c == '\t'){
			int i=0;
			while(i < (TABSTOP - (charcc % TABSTOP))){
				putchar('@');
				++i;
			}
		}else{
			putchar(c);
		}
		
	}	
	
}
/*
Hi      bollocks
Hi@@@bollocks

i/p <after bollocks 1 tab is there> 
hi bollocks     kun
hi bollocks@@@kun

i/p <after bollocks 1 space and 1 tab is there> 
hi bollocks     kun 
hi bollocks @@kun
*/
