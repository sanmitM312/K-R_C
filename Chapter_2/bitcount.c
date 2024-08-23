#include<stdio.h>

int bitcount(unsigned x){
	int b;

	for(b=0; x !=0; x >>= 1){
		if(x&1)b++;
	}
	return b;
}
int main(){
	
	int x = 7;
	printf("The number of bits in x is : %d",bitcount(7));
}
