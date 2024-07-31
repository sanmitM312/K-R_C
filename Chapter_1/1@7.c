#include<stdio.h>

int main(){
	
	
	printf("ONE WAY");
	printf("The integer value of EOF is %d\n", EOF);
	
	printf("SECOND WAY , DERIVED FIRST FROM THIS\n");
	printf("LIMIT %d\n", 5);
	
	for(int i=1; i <= EOF + 5; i++)
	printf("%d\n", i);
	
	printf("ITERATES ONLY LIMIT-1 %d times", EOF+5);
}
