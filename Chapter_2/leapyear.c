
#include<stdio.h>

int main(){

	int year;
	printf("Enter the year : ");
	scanf("%d", &year);
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		printf("\nIt is a leap year");
	}else{
		printf("\nIt is not a leap year");
	}
}
