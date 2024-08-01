#include<stdio.h>

int main(){
	
	double lineCount, blankCount, tabCount;
	
	int c;
	
	while((c = getchar()) != EOF){
		if(c == '\n')++lineCount;
		else if(c == ' ')++blankCount;
		else if(c == '\t')++tabCount;
	}
	
	printf("\nCount of blanks %0.1f, tabs %0.1f, newlines %0.1f are : ",blankCount, tabCount, lineCount);
}
