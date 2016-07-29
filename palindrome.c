#include <stdio.h>    //This is Armstrong Park's program on determining whether a string of characters is a palindrome or not
#include <string.h>

int palindrome(int start, int end, char *userinput)
{
	char x, y;

	x=userinput[start];
	y=userinput[end];

	if (x != y)

		return 0;

	else if (start >= end)

		return 1;

	else
		start=start+1;
		end=end-1;
		return palindrome(start, end, userinput);

	return 0;

}

int main()
{
	char userinput[50];

	int arraylength;

	int begin=0;

	int finish;

	printf("Enter a string of characters:  ");
	
	fgets(userinput, 50, stdin);

	arraylength=strlen(userinput);
	
	finish = arraylength - 2;

	if(palindrome(begin, finish, userinput))
		
		printf("This is a palindrome\n");
	else
		printf("This is not a plaindrome\n");

	return 0;
}
