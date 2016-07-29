/*Jinoo Hong*/
/*Write a program `palindrome.c` using recursion to test if a word/phrase is a palindrome (something that reads the same if the letters are reversed, such as racecar).*/

#include <stdio.h>
#include <string.h>

/*checks if the first and last indexes of the string are the same. If they are, then it checks if the second and second last indexes and so forth. If they are NOT, then it returns 0. This continues until it has checked the middle index. Reaching the middle means that the function has checked every index without returning a 0, and so it will return a 1 because it is a palindrome.*/
int checkIfSame(int count, char string[50], int length) {
	char first = string[count];
	char last = string[length-2-count];
	printf("length: %d\nfirst: %c\nlast: %c\n", length, first, last);
	if (count>=(length-1)/2) {
		return 1;
	}
	if (first!=last){
		printf("returned 0\n");
		return 0;
	}
	else {
		printf("count is: %d\n", count);
		return checkIfSame(count+1, string, length);
	}
}

/* main function: It prompts for a string and then checks if that string is a palindrome with the checkIfSame fxn*/
int main () {
	char string [50];
	printf("Please enter a word: ");
	fgets(string, sizeof(string), stdin);
	printf("%s", string);
	int palindrome = checkIfSame(0,string, strlen(string));
	if (palindrome) {
		printf("Palindrome\n");
	}
	else {
		printf("Not palindrome\n");
	}
}
