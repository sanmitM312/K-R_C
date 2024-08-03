#include<stdio.h>


#define IN  1
#define OUT 0

void horizontal_histogram(){
	int wl[21]; // taking max word length to be 20 for better visualization.
	
	int c, state, cc = 0;
	
	state = OUT;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			if(state == IN){
				wl[cc] += 1;
				cc = 0;
			}
			state = OUT;
		}else{
			if(state == OUT){
				state = IN;
			}else{
				cc++;
			}
			
		}
	}
	printf("\n3 \'|||\' equals 1 count. [LENGTH]: [COUNT]\n");
	for(int i = 0; i < 21; i++){
		printf("\n%4d:",i+1);
		for(int k=0; k < wl[i]; k++){
			printf("|||");
		}
	}
}
int main(){

	horizontal_histogram();
	
}
