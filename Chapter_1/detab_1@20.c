#include<stdio.h>

#define TABSTOP 3
int main(){
	
	int c;
	
	while((c = getchar()) != EOF){		
		if(c == '\t'){
			int i=0;
			while(i < TABSTOP){
				putchar(' ');
				++i;
			}
		}else{
			putchar(c);
		}
	}	
	
}


