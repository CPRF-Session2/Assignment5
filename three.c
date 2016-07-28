/* Drew French */

/* Takes three user inputs
 * and determines whether
 * they form a valid triangle,
 * the triangle type, and
 * makes sure ints were entered.
 */

#include <stdio.h>

void isTriangle(int, int, int);
void triangleType(int, int, int);
void sanitizedInput();
int a;
int b;
int c;
int i;

int main()
{	
	sanitizedInput();
	isTriangle(a, b, c);
	triangleType(a, b, c);
	
	return 0;
}

void isTriangle(a, b, c)
{
	if(a + b > c && a + c > b && b + c > a)
	{
		printf("\nThis is a valid triangle.\n");
		i = 1;
	}
	else
	{
		printf("\nThis is not a valid triangle.\n");
		i = 0;
	}
}

void triangleType(a, b, c)
{
	if(i == 1)
	{
		if(a == b && b == c)
		{
			printf("This triangle is equilateral.\n");
		}
		if((a == b && a != c) || (a == c && a != b) || (b == c && a != b))
		{
			printf("This triangle is isosceles.\n");
		}
		if(a != b && b != c)
		{
			printf("This triangle is scalene.\n");
		}
	}
}

void sanitizedInput()
{
	int v;
	do
	{
		printf("Type a valid length for side a: ");
		if(!scanf("%d", &a))
		{
			printf("Not a valid integer. ");
			scanf("%*[^\n]");
			v = 0;
		}
		else
		{
			v = 1;
		}
	} while(v == 0);
	
	do
	{
		printf("Type a valid length for side b: ");
		if(!scanf("%d", &b))
		{
			printf("Not a valid integer.");
			scanf("%*[^\n]");
			v = 0;
		}
		else
		{
			v = 1;
		}
	} while(v == 0);
	
	do
	{
		printf("Type a valid length for side c: ");
		if(!scanf("%d", &c))
		{
			printf("Not a valid integer.");
			scanf("%*[^\n]");
			v = 0;
		}
		else
		{
			v = 1;
		}
	} while(v == 0);
}
