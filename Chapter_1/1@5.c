#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

void reverse_cel_to_fahr(){
	float cels;

 	
 	int t = 30;
 	while(t--)printf("-");
 	printf("\n");
 	printf("|%28s|\n"," ");
 	
 	printf("|%10s%15s%4s\n","Celsius","Fahrenheit","|"); // 1 + 12 + 13 + 4 + 1 = 30
	
	printf("|%28s|\n"," ");
 	
 	t = 30;
 	while(t--)printf("-");
 	printf("\n");
 	
 	for(cels= UPPER; cels >= LOWER ; cels-= STEP){
 		printf("|%8.0f%4s%11.1f%6s\n",cels,"|",(9*cels/5) + 32,"|"); // 1+8+4+1+8+5 = 27
 	}
	
	printf("|%11s|%16s|\n"," "," "); // 1+15+1+12+1=30
	t = 30;
 	while(t--)printf("-");
}

void reverse_fahr_to_cel(){
	float fahr;
 	
 	int t = 30;
 	while(t--)printf("-");
 	printf("\n");
 	printf("|%28s|\n"," ");
 	
 	printf("|%12s%13s%4s\n","Fahrenheit","Celsius","|"); // 1 + 12 + 13 + 4 + 1 = 30
	
	printf("|%28s|\n"," ");
 	
 	t = 30;
 	while(t--)printf("-");
 	printf("\n");
 	
 	for(fahr= UPPER; fahr >= LOWER ; fahr-= STEP){
		printf("|%8.0f\t|%8.1f%5s\n",fahr,5 * (fahr - 32) / 9,"|"); // 1+8+4+1+8+5 = 27
 	}
	
	printf("|%15s|%12s|\n"," "," "); // 1+15+1+12+1=30
	t = 30;
 	while(t--)printf("-");
 	printf("\n");
}
int main(){
	
 	
 	reverse_fahr_to_cel();
 	reverse_cel_to_fahr();
	
}
