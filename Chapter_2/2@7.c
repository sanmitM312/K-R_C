#include<stdio.h>

unsigned invert(unsigned x, int p, int n){
	unsigned tmp = 1 << (p-n+1);
	return x ^ tmp;
}
int main(){
	printf("\n Invert  with x=%u, p=%d, n=%d is : %u",7,4,3,invert(7,4,3));

	
}
