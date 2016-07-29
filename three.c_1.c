#include <stdio.h>
#include <math.h>
int isTriangle(int a, int b, int c){
	if ((a + b <= c) || (a + c <= b) || (b + c <= a)){
		printf("Invalid triangle\n");
		}
	else 
		printf("Valid triangle\n");
	return a, b, c; 
}		

int triangleType(int a, int b, int c){
	if ((a + b <= c) || (a + c <= b) || (b + c <= a))
		printf("No type\n");
	else{
	if ((a == b) && (b == c) && (a == c))
		printf("Equilateral Triangle\n");
	if ((a != b) && (a != c) && (b != c))
		printf("Scalene Triangle\n");
	if ((a == b && a != c && b != c) || (a == c && a != b && c != b) || (b == c && b != a && c != a))
		printf("Isosceles Triangle\n");
	}
	return 0;
	}
int sanitizedInput(int x){
	while (x <= 0) {
	printf("Invalid input. Print a positive integer: ");
	scanf("%d", &x);
	}
	return x; 
	}

int main(){
int x, a, b, c;
	printf("Enter a positive integer: ");
	scanf("%d", &x);
	a = sanitizedInput(x);
	printf("Enter a positive integer: ");
	scanf("%d", &x);
	b = sanitizedInput(x);
	printf("Enter a positive integer: ");
	scanf("%d", &x);
	c = sanitizedInput(x);
	isTriangle(a, b, c);
	triangleType(a, b, c);
	

	return 0;
}
