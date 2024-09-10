#include<stdio.h>

int binsearch(int, int [], int);

int binsearch(int el, int buff[], int len){
	int low = 0;
	int high = len-1;
	
	while(high > low){
		int mid = (low+high)/2;
		if(el <= buff[mid]){
			high = mid;
		}else{
			low = mid+1;
		}
	}
	return buff[high] == el ? high : -1;

}
int main(){
	int a[] = {1,4,5,7,8,9,10};
	int el = 2;	
	printf("The element %d found at position %d",el, binsearch(el,a,7));	

}
