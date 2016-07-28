/* Jared Wasserman -- three.c */
/* This program takes three integers (for the sides of a traingle) and returns wether or not they form a valid triangle and what kind of triangle they form*/

#include <stdio.h>

int sanitizedInput(char);
int isTriangle(int,int,int);
void triangleType(int,int,int);

int main(){
	
	int a = sanitizedInput('1');
	while(getchar()!='\n');
	int b = sanitizedInput('2');
    	while(getchar()!='\n');
	int c = sanitizedInput('3');
	//isTriangle(a,b,c);
	if(isTriangle(a,b,c)){
		triangleType(a,b,c);
	}

return 0;
}


int sanitizedInput(char character){
	int returnValue;
	int input;
	do{
		printf("Please enter value for side %c: ",character);
		returnValue = scanf("%d",&input);
		if(returnValue==0){
			printf("Invalid Input. ");
			while(getchar()!='\n');
		}
	}while(returnValue==0);

	return input;
}

int isTriangle(int a, int b, int c){
	if(a>(b+c)||b>(a+c)||c>(b+a)){
		printf("%d,%d,%d: do not form a valid triangle.\n",a,b,c);
		return 0;
	}else{
		printf("%d,%d,%d: forms a valid triangle.\n",a,b,c);
		return 1;
	}
}

void triangleType(int a, int b, int c){
	if(a==b&&b==c){
		printf("%d,%d,%d: is equilateral.\n",a,b,c);
	}else if(a==b||b==c||c==a){
		printf("%d,%d,%d: is isocles.\n",a,b,c);
	}else{
		printf("%d,%d,%d: is scalene.\n",a,b,c);
	}
}
