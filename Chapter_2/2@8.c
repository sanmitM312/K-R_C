#include<stdio.h>

unsigned rightrot(unsigned x, int n){
	int sz = n;
	while(sz--){
		if(x & 1){
			x = x >> 1;
			x |= (1<<n);
		}else{
			x = x >> 1;
		}
	}
	return x;
}
int main(){	
	printf("\n Right rotate with x=%u, n=%d is : %u",7,3,rightrot(7,4));
}
