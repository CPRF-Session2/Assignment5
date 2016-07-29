//Ashank Kumar, program takes in three intigers, checks if they are valid, checks if they form a triangle, and what type of triangle
#include <stdio.h>

int isTriangle(int a, int b, int c)
{
	if((a+b > c) && (a+c > b) && (c+b > a)) //doesnt work
		return 1;
	else
		return 0;
}

int triangleType(int a, int b, int c) 
{
	if(a == b && a == c)
		return 1; //equi
	else if((a == b & a != c) || (a == c & a != c) ||( b==c & b != a))
		return 0; //isos
	else
		return -1; //scalene
}

int sanitizedInput()
{
	int x;
	int check;

	do
	{
		check = 0;
		printf("Enter a number:");
		if(scanf("%d",&x) == 0)//doesnt check for less than 0
		{
			printf("Not a number\n");
			while(getchar() != '\n');
			check = 1;
		}
		else if(x <= 0)
		{
			printf("Not a valid number\n");
			while(getchar() != '\n');
			check = 1;
		}
	}while(check);

	return x;
}

int main()
{
	int a;
	int b;
	int c;
	int check;

	a = sanitizedInput();
	b = sanitizedInput();
	c = sanitizedInput();

	check = isTriangle(a,b,c);

	if(check == 1)
		printf("Triangle\n");
	else
		printf("Not a triangle\n");

	check = triangleType(a,b,c);

	if(check==1)
		printf("Equilateral\n");
	else if(check==0)
		printf("Isoceles\n");
	else
		printf("Scalene\n");


	return 0;
}
