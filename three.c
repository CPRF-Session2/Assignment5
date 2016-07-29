/*Write a program `three.c` that takes in 3 user-input integers and checks whether or not the 3 integers form a valid triangle (no one side is longer than the sum of the other 2 sides).  It should contain the following functions: 
      - `isTriangle()`, which determines whether the integers form a valid triangle
      - `triangleType()`, which determines whether the triangle is equilateral (all sides are equal), isoceles (only 2 sides are equal), or scalene (no sides are equal) and prints a message as appropriate
      - `sanitizedInput()`, which ensures that the user-input integers are valid*/

#include <stdio.h>
#include <string.h>

/*Checks if the three sides can make a triangle by checking that all sides are not greater than or equal to the sum of the two other sides. It also checks that all sides are not 0.*/ 
int isTriangle(float s1,float s2,float s3) {
	if (s1<s2+s3&&s2<s1+s3&&s3<s1+s2&&s1!=0&&s2!=0&&s3!=0){
		return (1);
	}
	else {
		return (0);
	}
}

/*It checks if the triangle is equilateral. It then checks if it is a scalene. If neither are true, it has to be isoceles*/
int triangleType(float s1, float s2, float s3) {
	if (s1==s2&&s1==s3) {
		return(0);
	}
	if (s1!=s2&&s1!=s3) {
		return (1);
	}
	else {
		return (2);
	}
}

/*If prompts for a string. It then enters all integers into a new string. This makes sure that there is no invalid input. If this second string is empty however, then it will ask the user for a new length for the Nth side.*/
float sanitizedInput(int sidenumber){
	do {
		char str [100];
		printf("Please input length of side %d: ", sidenumber);
		fgets(str,sizeof(str),stdin);
		float result;
		int counter, counter1=0;
		char current;
		char str1[100];
		for (counter = 0; str[counter]!='\0'; counter++){
			current = str[counter];
			if (current=='0'||current=='1'||current=='2'||current=='3'||current=='4'||current=='5'||current=='6'||current=='7'||current=='8'||current=='9') {
				str1[counter1]=str[counter];
				counter1++;
			}
		}
		if (strlen(str1)==0){
			printf("Invalid input!\n");
			continue;
		}
		else {
			sscanf(str1, "%f", &result);
			return (result);
		}
	}
	while (1);
}

/* this is the main program. It calls the sanitationfxn for each side. Then it checks what type of triangle it is.*/
int main () {
	float s1,s2,s3;
	s1 = sanitizedInput(1);
	s2 = sanitizedInput(2);
	s3 = sanitizedInput(3);
	if (isTriangle(s1,s2,s3)){
		printf("It is a triangle\n");
		int tri = triangleType(s1,s2,s3);
		if (tri==0){
			printf("It is equilateral\n");
		}
		if (tri==1) {
			printf("It is scalene\n");	
		}
		if (tri==2) {
			printf("It is isoceles\n");
		}
	}
	else {
		printf("It is not a triangle.\n");
	}
}
