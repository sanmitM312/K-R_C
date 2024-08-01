#include<stdio.h>


/* The program takes whatever I give input in console before pressing enter and spits it back on the console. */
int main(){


	int c;
	while((c = getchar()) != EOF)
		putchar(c);
	
	
}
