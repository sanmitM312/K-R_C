#include<stdio.h>
#include<limits.h>
#include<float.h>


// battle to be fought on a later day,read FLOATING-POINT IN COA , Digital Logic 
int main (){
	
	printf("\nShort MAX : %d MIN : %d",SHRT_MAX, SHRT_MIN);
	printf("\nInteger MAX : %d MIN : %d",INT_MAX, INT_MIN);
	printf("\nCharacter MAX : %d MIN : %d",CHAR_MAX, CHAR_MIN);
	printf("\nLong MAX : %ld MIN : %ld",LONG_MAX, LONG_MIN);	
	
	// does not work for double
	printf("\nFloat %f %f",FLT_MAX,FLT_MIN);
	printf("\nDouble %ld %ld",DBL_MAX,DBL_MIN);
}
