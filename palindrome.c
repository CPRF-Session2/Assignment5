#include <stdio.h>
#include <string.h>

int isPalindrome(char string[], int left, int right) {
	if(left>=right) {
		return 0;
	}
	else {
		return 1;
	}
	if(string[left] == string[right]) {
		return isPalindrome(string, left + 1, right - 1);
	}

}

int main() {
	char string[50];
	int left = 0;
	int right = strlen(string);
	printf("Please enter a string:\n");
	fgets(string, sizeof(string), stdin);
	strtok(string, "\n");
	if(isPalindrome(string,left,right)==0) {
		printf("%s is a palindrome.\n", string);
	}
	else {
		printf("%s is not a palindrome.\n", string);
	}

	return 0;
}
