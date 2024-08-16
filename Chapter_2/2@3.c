#include<stdio.h>


void htoi(char s[]){

	int decimal = 0;
	
	int start = 0;
	if((s[1] == 'x' || s[1] == 'X') && s[0] == '0')start=2;
	
	for(int i=start; s[i] != '\0' ; ++i){
	  if(s[i] >= 'a' && s[i] <= 'f'){
		decimal = 16 * decimal + (s[i] - 'a' + 10); // clever use of arithmetic precendence, for the 0th power value.
	   }else if (s[i] >= 'A' && s[i] <= 'F'){
	   	decimal = 16 * decimal + (s[i] - 'A' + 10);
	   }else{
		decimal = 16 * decimal + (s[i] - '0');
	   }
	}
	
	printf("\nThe decimal value is %d", decimal);
}
int main (){

	
	char s[] = "0x1f";
	htoi(s);
	
	
	
}
