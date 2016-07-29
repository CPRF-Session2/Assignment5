/* Priyanka Musti */
/*Write a program palindrome.c using recursion to test if a word/phrase is a palindrome (something that reads the same if the letters are reversed, such as racecar).*/
#include<stdio.h>
#include<string.h>

int pali(char drome[50],int i, int n)
{
	if(drome[i] !=drome[n])
		return 0;
	else if(i<=n)
		return 1;
	else return pali(drome, i++, n--);
}
int main()
{
	char drome[50];
	int i;
	int n;
	int back;

	printf("Enter text ");
	fgets(drome, 50, stdin);
	drome[strlen(drome)-1]='\0';

	i=0;
	n=strlen(drome)-1;

	if(back)
		printf("%s is a palindrome\n", drome);
	else
		printf("%s isn't a palindrome\n", drome);
return 0;
}
