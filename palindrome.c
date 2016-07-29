/* Can Parlar - scans a string and checks if it is a palindrome word or not
*/
#include <stdio.h> 
#include <string.h>

int palindrome (char s1[20], int index, int index2, char s2[20]) {

int value;


if (index == strlen(s1)) {
	
	if (strcmp(s1, s2) == 0) {
		value = 0;
		return value;
	}

	else  {
		value = 1;
		return value;
	}
}

	s2[index2] = s1[index];
	index++;
	index2--;

return palindrome(s1, index, index2, s2); 
}

 int main () {

	 char s1[20];
	 int index = 0;
	 int value;
	 int index2;

	 printf("Enter a word:");
	 fgets(s1, sizeof(s1), stdin);  
	 s1[strlen(s1)-1] = '\0';

	 index2 = strlen(s1)-1;

	 char s2[20];
	 s2[strlen(s1)-1] = '\0';
	 value = palindrome(s1, index, index2, s2);

	 if (value == 0) {
		 printf("Your word is a palindrome!\n");}
	 if (value == 1) {
		 printf("Your word is not a palindrome!\n");} 
	 return 0;
}
