/*Write a program three.c that takes in 3 user-input integers and checks whether or not the 3 integers form a valid triangle (no one side is longer than the sum of the other 2 sides). It should contain the following functions: */
/*Priyanka Musti*/
#include<stdio.h>

int isTriangle(int a, int b, int c)
{
	if ((a+b<=c)||(a+c<=b)||(b+c<=a))
	{
		printf("Not a triangle triangle\n");
	}
	else
		printf("Valid triangle\n");

		return a,b,c;
	}
	/* This shows and example of triangle possiblilities that don't work*/

int triangleType(int a, int b, int c)
{
	if ((a+b<=c)||(a+c<=b)||(b+c<=a))
		printf("Not a triangle\n");
	else{

	if((a==b)&&(b==c)) /*this would be an equalateral triangle*/
		printf("Equilateral Triangle\n");

	if ((a!=b)&&(a!=c)&&(b!=c))
		printf("Scalene Triangle\n");

		if((a==b&&a!=c&&b!=c)||(a==c&&b!=c&&b!=a)||(b==c&&b!=a&&c!=a)) /*This is an example of an isosceles*/
	
		printf("Isosceles Triangle\n");}
		return 0;

}

int sanitizedInput(int x)
{
	while (x<=0)
	{
		printf("Print a positive integer ");
		scanf("%d", &x);
	}
	return x;
}
int main()
{
	int a,b,c,x;

	printf("Enter a number ");
	scanf("%d", &x);
	a=sanitizedInput(x);
	
	printf("Enter a number ");
	scanf("%d",&x);
	b=sanitizedInput(x);
	
	printf("Enter a number ");
	scanf("%d", &x);
	c=sanitizedInput(x);

	isTriangle(a,b,c);
	triangleType(a,b,c);

	return 0;
}
