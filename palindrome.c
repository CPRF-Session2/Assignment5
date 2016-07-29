//Ashank Kumar, program checks if a string is a palindrome
#include <stdio.h>
#include <string.h>

int fnx(char string[50], int i, int counter)
{
	if(string[i] != string[counter])
		return 0;
	else if(i <= counter)
		return 1;
	else
		return fnx(string, i++, counter--);
}
int main()
{
	//int check;
	char string[50];
	int i;
	int counter;
	int valid;

	printf("Enter a string:");
	fgets(string, 50, stdin);
	string[strlen(string)-1] = '\0';

	i = 0;
	counter = strlen(string)-1;

	valid = fnx(string, i, counter);
	
	if(valid)
		printf("%s is a palindrome\n",string);
	else
		printf("%s is not a palindrome\n",string);

	return 0;

}
