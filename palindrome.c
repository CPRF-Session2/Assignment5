#include <stdio.h>
#include <string.h>
/* Checks if an input is a palindrom*/
int main(){
	int x,y;
	char word[100];
	printf("Enter a word :");
	fgets(word,sizeof(word),stdin);
	word[strlen(word)-1]='\0';
	for (x=0;x<strlen(word);x++){
		if(word[x]!=word[strlen(word)-1-x]){
			printf("This word is not a palindrome!\n");
			break;}
		if(x==strlen(word)-1){
			printf("This word is a palindrome!\n");}}
	return 0;
	}	

