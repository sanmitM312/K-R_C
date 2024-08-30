#include<stdio.h>

void lower_ascii(char* str){
	int i;
	for(i=0; str[i] != '\0'; i++){
		if(str[i] >= 'A' && str[i] <='Z'){
			str[i] = str[i] + 32;
		}
	}
}
int main(){
	
	char str[] = "HalLL9O";
	
	printf("Lowercasing str: %s ",str);
	lower_ascii(str);
	printf("%s",str);
}
