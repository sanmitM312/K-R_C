#include<stdio.h>

#define MAXLINE 100 // change it smaller values for testing


int getline_mine(char buffer[], int lim);
void copy_mine(char[], char[]);

/*
INTERESTING OBSERVATION
if I give an EOF character at the end of some input line then the length is random.
*/
int main(){
	int len,maxlen = 0;
	char line[MAXLINE];	
	char longest[MAXLINE];
	
	while((len = getline_mine(line,MAXLINE)) > 0){
		//printf("\nline length : %d",len);
		if(maxlen < len){
			maxlen = len;
			copy_mine(line,longest);
		}
	}
	
	printf("MAX LENGTH OF A LINE IS : %d\n", maxlen);
	printf("MAXIMUM POSSIBLE OUTPUT POSSIBLE :%s",longest);
}

int getline_mine(char buffer[], int lim){
	
	int len = 0,c;
	
	for(len=0; (c = getchar()) != EOF && c != '\n'; len++){
		if(len < lim-1){
			buffer[len] = c;
		}
	}
	
	if(c == '\n')buffer[len++] = c;
	
	buffer[len] = '\0';
	
	// printf("\nline length : %d",len);
	return len;
	
}

void copy_mine(char from[], char to[]){
     int i=0;
     while((to[i] = from[i]) != '\0'){
     	++i;
     }
}
