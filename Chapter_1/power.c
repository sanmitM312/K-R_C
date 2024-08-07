#include<stdio.h>

// calculating base^p
int main(){
	int p,base = 2,n = 5;
	
	p = 2;
	for(int i = 1; i <= n; i++){
	  p = p * base;
	}
	
	printf("%d ", p);
}
