#include<stdio.h>

int main(){
	int p,base,n;
	
	p = 1,n = 10;
	for(base = 1; base <= 10; base++){
	  p = p * base;
	}
	
	printf("%d ", p);
}
