#include<stdio.h>


unsigned getbits(unsigned x, int p, int n){
	
	return (x >> (p+1-n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y){
	unsigned temp = (y & ~(~0 << n)) << (p-n+1);
	return temp | x;
}
int main(){
	
	printf("\n Getbits with x=%u, p=%d, n=%d is : %u",7,4,3,getbits(7,4,3));
	printf("\n Setbits with x=%u, p=%d, n=%d, y=%u is : %u",18,4,3,6,setbits(18,4,3,6));
}

/*
getbits 
x = 6 -> 00110 -> 00011 -> 00001
p = 4
n = 3 
bitfield to be copied -> 001 (0-indexed from right)
k = x >> 2 -> 00001
~(~0 << 3) -> 00111
AND 	   -> 00001 ANS = 1

setbits
x = 18 -> 001010
p = 4
n = 3
y = 000110
bitfield to be copied b -> 110
expected output -> putting b in x from p=4, 0 110 10 or, 011010

1. extraction of the bits
~(~0 << 3) -> 000111
y 	   -> 000110
AND 	   -> 000110

2. move the result p-n+1 places to the left and or with x
a. 000110 << 2 -> 011000
b. 	       -> 001010
OR 	       -> 011010 = 26, 16+8+2

*/
