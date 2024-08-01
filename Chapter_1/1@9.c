#include<stdio.h>

int main(){

	
	int prev, cur;
	
	while((cur = getchar()) != EOF){
		if(cur != ' ' && cur != '\t')putchar(cur);
		else if(prev != ' ' && prev != '\t')putchar(' ');
		
		prev = cur;
	}
	
}
/*
IP:	Hi<1tab>I<1space>am<1tab>Sanmit<1space><2tabs>Mandal.
OP:	Hi I am Sanmit Mandal.

*/
