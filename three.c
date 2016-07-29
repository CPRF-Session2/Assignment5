//Matthew Kellerman -sees if user input are numbers, if they form a triangle, and what triangle do they form
#include <stdio.h>

int isTriangle(int x, int y, int z)
{
if(x+y>z&&x+z>y&&y+z>x){
//sees if triangle is valid
printf("This forms a valid triangle.\n");
return 1;
}
else{
printf("This does not form a valid triangle.\n");

return 0;	
}

}
int sanitizedInput(){
	int value;
	int input;
	do{
	printf("\nEnter three numbers.\n");
	//if user inputs invalid input= value will be zero
	value = scanf("%d",&input);
	//input value stored in variable below in main
	if(value==0){
		printf("Not valid input.\n");
		while(getchar()!='\n');
	}
	}while(value==0);
	return input;
//keeps input value	
}
void triangleType(int x, int y, int z)
{
	if(x==y&&y==z&&x==z){
        printf("This triangle is equilateral.\n");
	
	}	

	else 
	if(x==z||x==y||x==z){
	printf("This triangle is an isosceles triangle.\n");
	}
	else{
		printf("This triangle is a scalene triangle.\n");
		}
	
	
	}
	
int main()
{
int x = sanitizedInput();
while(getchar()!='\n');
//while clears out last input
int y = sanitizedInput();
while(getchar()!='\n');
int z= sanitizedInput();
if(isTriangle(x,y,z)){
	//if isTriangle has been returned 1(true), the code on the bottom will be ran
	triangleType(x,y,z);
}

return 0;
}

