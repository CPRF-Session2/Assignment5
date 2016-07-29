/*Write a program three.c that takes in 3 user-input integers and checks whether or not the 3 integers form a valid triangle (no one side is longer than the sum of the other 2 sides). It should contain the following functions:

    isTriangle(), which determines whether the integers form a valid triangle
        triangleType(), which determines whether the triangle is equilateral (all sides are equal), isoceles (only 2 sides are equal), or scalene (no sides are equal) and prints a message as appropriate 
	sanitizedInput(), which ensures that the user-input integers are valid*/
#include <stdio.h>
int sanitizedInput(){
	char line [100];
	float x;
	while (1) {
//		printf("Enter a number: ");
		fgets(line, sizeof(line), stdin);
		if (sscanf(line, "%f", &x))
			break; 
		printf("Not valid, retry\n");
		}
		return x;

}
int isTriangle(float a,float b,float c){
	if (a+b>c&&a+c>b&&b+c>a)
		return 1;
	return 0;

}
int triangleType(float a, float b, float c) {
	if (a==b&&b==c)
		return 1;
	else if ((a==b&&b!=c)||(b==c&&c!=a)||(a==c&&b!=a))
		return 2;
	else if (a!=b&&b!=c&&a!=c)
		return 3;
}
int main(){
	printf("Enter the first number\n");
	float a=sanitizedInput();	
	printf("Enter the second number\n");
	float b=sanitizedInput();
	printf("Enter the third number\n");
	float c=sanitizedInput();

	if(isTriangle(a,b,c)==1)
		printf("Triangle is valid\n");
	else
		printf("Triangle isn't valid\n");
	if(isTriangle(a,b,c)==1)
	{
		if(triangleType(a,b,c)==1)
			printf("The triangle is equilateral\n");
		else if (triangleType(a,b,c)==2)
			printf("The triangle is isoceles\n");
		else if (triangleType(a,b,c)==3)
			printf("The triangle is scalene\n");
	}	
return 0;
}
