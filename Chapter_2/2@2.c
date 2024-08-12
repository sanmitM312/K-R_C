#include<stdio.h>


int main(){
	
	// code for 2.2
	
	int c;
	
	int lim = 10, i = 0;
	char s[lim];
	for(int i=0; i<10; i++)s[i] = ' ';
	
	while(i < lim-1){
		c = getchar();
		if (c == '\n'){
		    	lim = 0; // clever of breaking the loop
		}else if(c == EOF){
		   	lim = 0; // clever of breaking the loop
		}else{
			s[i++] = c;
		}
		
	}
	s[i] = '\0';
	
	printf("\nO/P : %s  ", s);
}
