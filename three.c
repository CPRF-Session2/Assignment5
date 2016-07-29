/* Mariposa Lee, using 3 functions to check a triangle type based on user input integers for side lengths*/
#include <stdio.h>
#include <math.h>

int isTriangle(int num1, int num2, int num3) {
	int q;
	if ((num1+num2 >= num3) &&  (num2+num3 >= num1) && (num1+num3 >= num2)){
		q=1;}
	else {q=0;}
	return q;
}

int triangleType(int num1, int num2, int num3) {
	int h;
	if ((num1==num2) && (num1==num3)){
		h= 1;}
	else if ( 
		((num1==num2) && (num1!=num3)) ||
		((num2==num3) && (num2!=num1)) ||
		((num1==num3) && (num1!=num2)) )	
	{
		h = 2;}
	else if ((num1!=num2) && (num1!=num3) && (num2!=num3))	
	{ h= 0;}
	else {h=3;}
	return h;
}


int sanitizedInput(int num) {
	printf("Please enter a number.\n");
	scanf("%d", &num);
	while (getchar()!='\n') {
		printf("Invalid number. Try again.\n");
		scanf("%d", &num);
	}
return num;
}

int main () {
	int a,b,c;
	int q,w,e;

q=sanitizedInput(a);
w=sanitizedInput(b);
e=sanitizedInput(c);
 
int valid;
valid =isTriangle(q, w, e);
if (valid == 1) {
	printf("The triangle is valid.\n"); /*Only prints triangle type if triangle is valid.*/
	int type;
type= triangleType(q, w, e);
if (type == 1) {
	printf("The triangle is equilateral.\n");}
else if (type==2) {
	printf("The triangle is isoceles.\n");}
else if (type ==0) {
	printf("The triangle is scalene.\n");}
}
else { printf("The triangle is not valid.\n");}

return 0;
} 
