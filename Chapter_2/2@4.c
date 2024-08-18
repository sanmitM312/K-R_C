#include<stdio.h>

void squeeze(char s[], int c){
	int i,j;
	for(i = j = 0; s[i]  != '\0'; i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}
void squeeze_an(char s1[],char s2[]){
	// brute force version
	int i,j,k=0;
	int match = 0;
	for(i=0; s1[i] != '\0'; i++){
		match = 0;
		for(j=0; s2[j] != '\0' && !match; j++){
			if(s1[i] == s2[j]){
				match = 1;
			} 
		}
		if(!match)s1[k++]=s1[i];
	}
	s1[k]='\0'; // required for printf otherwise the remaining part is also displayed
}
int main(){
	char str[] = "Sanambit Mbanddbal";
	//squeeze(str,'a'); // cannot pass string directly as arguement.
	
	char str2[] = "ab";
	squeeze_an(str,str2);	
	printf("%s",str); // call by reference for arrays
	
}
