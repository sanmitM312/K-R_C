#include<stdio.h>

// calculating base^p
long power(int base, int p){
	long res = 1;
	for(int i=1; i <= p; i++)
		res = res*base;
	
	return res; 
}
int main(){
	
	
	int base = 2,exp = 4;
	int c;
	//printf("Enter base first then the exponent");
	/*
	for(int i=1; (c = getchar()) != EOF; ++i){
		if(i==1){
			base = c -'0';
		}else{
			exp = c -'0';
		}
		
	}
	*/
		
		
	printf("Result of %d^%d : %ld ",base,exp,power(base,exp));
}
