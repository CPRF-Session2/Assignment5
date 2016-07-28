#include <stdio.h>
#include <string.h>

int main()
{
	char in[50] = "", out[50] = "";
	int i, j;

	printf("Type a string here: ");
	fgets(in, sizeof(in), stdin);

	while(!strcmp(in, "\n"))
	{
		printf("You didn't type anything! Please input a string: ");
		fgets(in, sizeof(in), stdin);
	}

	in[strlen(in) - 1] = '\0';

	for(i = 0, j = 0; i < 50; i++)
		if(in[i] != ' ')
		{
			out[j] = in[i];
			j++;
		}

	int size = strlen(out);

	for(i = 0; i < size; i++)
	{
		if(out[i] != out[size - i - 1])
		{
			printf("\"%s\" is not a palindrome.", in);
			break;
		}

		if(i == size - 1)
			printf("\"%s\" is a palindrome.", in);
	}

	return 0;
}
