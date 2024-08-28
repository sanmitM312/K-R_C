#include<stdio.h>


unsigned faster_bitcount(unsigned x){

}


int bitcount(unsigned x){
	int cnt = 0;
	while(x != 0){
		if(x & 01){
	  	  cnt++;
		}
		x >>= 1;
	}
	return cnt;
}
int main(){
	int x=7;
	printf("Number of bits in %d : %d",x, bitcount(x));
}
