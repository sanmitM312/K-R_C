#include<stdio.h>

// BRUTE FORCE :<
int any(char s1[], char s2[]){
	
	int i,j,pos=-1;
	
	for(i = 0; s1[i] != '\0' && pos == -1; i++){
		for(j = 0; s2[j] != '\0' && s2[j-1] != s1[i]; j++){
			if(s1[i] == s2[j])pos = i; 
		}
	}
	
	return pos;
}
int main(){
	
	char s1[] = "S mit";
	char s2[] = " ";
	int pos = any(s1,s2);
	if(pos == -1){
		printf("\nNo characters common.");
	}else{
		printf("\nString a : %s", s1);
		printf("\nString b : %s",s2);
		printf("\nFirst common character %c(%d) occured at pos %d(1-indexed) in string a",s1[pos],s1[pos],pos+1);
	}
}
