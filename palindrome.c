//Albert Zhang
//Checks if a string is a palindrome but I can't get it to work please help me
#include <stdio.h>
#include <string.h>
int palindrome(char i[], char j[], int count) {
	int c, check;
	c = 0;
	check = 0;
	if (i[c] == j[count]) {
		c++;
		while (count >=0) {
			printf("count %d \n", count);
			printf("i %c \n", i);
			printf("j %c \n", j);
			count--;
			palindrome(i, j, count);
		}
		check = 1;
		return check;
	}
	else {
		printf("This is not an anagram");
		check = 0;
		return check;
	}
}
int main () {
	char i[100];
	char j[100];
	printf("Input a string. ");
	fgets(i, sizeof(1), stdin);
	int q = strlen(i);
	strcpy(i, j);
	int d;
	d = palindrome(i, j, q);
	if (d = 1) {
		printf("This is an palindrome. \n");
	}
	return 0;
}
