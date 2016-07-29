/* Can Parlar - scans 3 numbers and checks if they can make a valid triangleand what will be the type of the triangle */
#include <stdio.h>

int isTriangle(int a, int b, int c) {
	int valid;
	if (a+b>c&&c+b>a&&a+c>b) {
		valid = 1;}	
	else {
		valid = 0;}
	return valid;
}
int triangleType(int a, int b, int c) {
	int type;
if (a==b&&b==c) {
	type = 1;}
if (a==b&&a!=c||c==b&&b!=a||a==c&&a!=b) {
	type = 2;}
if (a!=b&&b!=c&&c!=a) {
	type = 3;}
return type;
}
int sanitizedInput() {
char line [50];
int num;
while (1) {
	printf("\nEnter a number:");
	fgets(line, sizeof(line), stdin);
	if(sscanf(line, "%d", &num)) {
		return num;
		break;}
	printf("You did not enter a number!\n");}
}
int main() {
int a;
int b;
int c;
int valid;
int type;
int num;

	num = sanitizedInput();
	a = num;
	num = sanitizedInput();
	b = num;
	num = sanitizedInput();
	c = num;
	valid = isTriangle(a, b, c);
	type = triangleType(a, b, c);
	if (valid == 0) {
		printf("Your triangle is not valid!\n");}
	if (valid == 1) {
		printf("Your triangle is valid!\n");}
	if (type == 1) {
		printf("Your triangle is equilateral!\n");}
	if (type == 2) {
		printf("Your triangle is isoceles!\n");}
	if (type == 3) {
		printf("Your triangle is scalene!\n");}
return 0;
}






