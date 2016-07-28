//Albert Zhang
//Checks what type the triangle is and whether it could be a triangle
#include <stdio.h>
#include <stdlib.h>
char sanitizedInput(int a) {
	float boi;
	printf("Input #%d \n", a);
	scanf("%f", &boi);
	if (getchar() != '\n') {
		sanitizedInput(a);
	}
	else {
		return boi;
	}
}
int isTriangle(float q, float r, float s) {
	int tri;
	if (q + r > s && r + s > q && s + q > r) {
		tri = 1;
		printf("These measurements can make a triangle. \n");
		return tri;
	}
	tri = 0;
	printf("These measurements cannot make a triangle. \n");
	return tri;
}
int triangleType(float q, float r, float s) {
	int type;
	if (q == r && q == s && r == s) {
		type = 0;
		printf("Your triangle is equilateral. \n");
		return type;
	}
	if (q==r||q==s||s==r) {
		type = 1;
		printf("Your triangle is isosceles. \n");
		return type;
	}
	else {
		type = 2;
		printf("Your triangle is scalene. \n");
		return type;
	}
}
int main () {
	float a, b, c;
	int s;
	a = sanitizedInput(1);
	b = sanitizedInput(2);
	c = sanitizedInput(3);
	int t;
	t = isTriangle(a, b, c);
	int d;
	d = triangleType(a, b, c);
	return 0;
}
