#include<stdio.h>

unsigned rightrot(unsigned x, int n){
	int sz = n;
	while(sz--){
		if(1 & x){
			x = x >> 1;
			x |= (1<<n);
		}else{
			x = x >> 1;
		}
	}
	return x;
}
int main(){	
        unsigned x = 15;
	int n = ;
	printf("\n Right rotate with x=%u, n=%d is : %u",x,n,rightrot(x,n));
}

/*
To be fixed, 15,5 15,6 all give 30, current assumption bitfield size is 5
*/
