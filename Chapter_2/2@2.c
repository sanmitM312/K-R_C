#include<stdio.h>

int main(){
	
	// code for 2.2
	
	int c;
	
	int lim = 10, i = 0;
	char s[lim];
	for(int i=0; i<10; i++)s[i] = ' ';
	
	while(i < lim-1){
		c = getchar();
		if(c != EOF){
		    if(c != '\n'){
		    	s[i] = c;
		    }	
		}
		++i;
	}
	s[i] = '\0';
	
	printf("\nO/P : %s  ", s);
}
