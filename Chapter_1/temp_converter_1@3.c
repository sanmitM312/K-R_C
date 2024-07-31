#include <stdio.h>


void cel_to_fahr(){
	float fahr, cels;
 	int lower, upper,step;
 	
 	lower = 0;
 	upper = 300;
 	step  = 20;
 	
 	cels = lower; // int is converted to float.
 	
 	int t = 30;
 	while(t--)printf("-");
 	printf("\n");
 	printf("|%28s|\n"," ");
 	
 	printf("|%10s%15s%4s\n","Celsius","Fahrenheit","|"); // 1 + 12 + 13 + 4 + 1 = 30
	
	printf("|%28s|\n"," ");
 	
 	t = 30;
 	while(t--)printf("-");
 	printf("\n");
 	
 	while(cels <= upper){
 		fahr = (9*cels/5) + 32;
 		printf("|%8.0f%4s%11.1f%6s\n",cels,"|",fahr,"|"); // 1+8+4+1+8+5 = 27
 		cels += step;
 	}
	
	printf("|%11s|%16s|\n"," "," "); // 1+15+1+12+1=30
	t = 30;
 	while(t--)printf("-");
}

void fahr_to_cel(){
	float fahr, celsius;
 	int lower, upper,step;
 	
 	lower = 0;
 	upper = 300;
 	step  = 20;
 	
 	fahr = lower; // int is converted to float.
 	
 	int t = 30;
 	while(t--)printf("-");
 	printf("\n");
 	printf("|%28s|\n"," ");
 	
 	printf("|%12s%13s%4s\n","Fahrenheit","Celsius","|"); // 1 + 12 + 13 + 4 + 1 = 30
	
	printf("|%28s|\n"," ");
 	
 	t = 30;
 	while(t--)printf("-");
 	printf("\n");
 	
 	while(fahr <= upper){
 		celsius = 5 * (fahr - 32) / 9;
 		printf("|%8.0f\t|%8.1f%5s\n",fahr,celsius,"|"); // 1+8+4+1+8+5 = 27
 		fahr += step;
 	}
	
	printf("|%15s|%12s|\n"," "," "); // 1+15+1+12+1=30
	t = 30;
 	while(t--)printf("-");
 	printf("\n");
}
int main(){
	
 	
 	fahr_to_cel();
 	cel_to_fahr();
	
}
