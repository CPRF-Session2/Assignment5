#include <stdio.h>
#include <math.h>      //This program determines whether three numbers could form a tringle and what kind of triangle they would form
#include <stdlib.h>

int isTriangle(int a, int b, int c)
{
	if (a+b<c)
	{
		printf("This is not a valid triangle, restart the program\n");
	}
	if (a+c<b)
	{
		printf("This is not a valid triangle, restart the program\n");
	}
	if (b+c<a)
	{
		printf("This is not a valid triangle, restart the program\n");
	}
	else
	{
		printf("This three numbers could form a triangle\n");
	}
}

int triangleType(int a, int b, int c)
{
	if ((a==b)&&(a==c)&&(b==c))
	{
		printf("This is an equalateral triangle\n");
	}
	if ((a!=b)&&(a!=c)&&(b!=c))
	{
		printf("This is a scalene triangle\n");
	}
	if (((a==b)&&(a!=c))||((a==c)&&(a!=b))||((c==b)&&(c!=a)))
	{
		printf("This triangle is isoceles\n");
	}
}

int sanitizedInput(int a, int b, int c)
{
	if ((a<0)||(b<0)||(c<0))
	{
		printf("Invalid input, restart the program\n");
	}


}

int main()
{
	int x, y, z;
	printf("Enter a number\n");
	
		scanf("%d", &x);

	printf("Enter another number\n");

		scanf("%d", &y);

	printf("Enter one last number\n");

		scanf("%d", &z);

	sanitizedInput(x, y, z);

	isTriangle(x, y, z);

	triangleType(x, y, z);

	return 0;

}
















