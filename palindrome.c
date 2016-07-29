#include <stdio.h>
#include <string.h>
int palindrome(int length, int i, char pal[]){
/*	printf("%s\n", pal);
	printf("%c, %c\n", pal[i], pal[length]);*/
	if (i>=length)
		return 1;
	if (pal[i]!=pal[length])
		return 0;
	if (pal[i]==pal[length]){
/*	fprintf(stderr, "i is %d\n", i); */
	length--;
	i++;
	return 1*palindrome(length, i, pal);	
	}	
}	
int main (){
	int i=0;
	char pal[100];
	printf("Enter a palindrome\n");
	fgets(pal,sizeof(pal), stdin);
	int length=strlen(pal)-2;
/* 	printf("The length is %d\n", length);
	printf("%c, %c\n", pal[i], pal[length]);*/
	int drome = palindrome(length, i, pal);
	if (drome==1)
		printf("String is palidrome\n");
	else if (drome==0)
		printf("Text is not palidrome\n");
/*		printf("value is %d\n", palindrome(length,i,pal));*/
	return 0;
}
