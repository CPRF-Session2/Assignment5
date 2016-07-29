/* This program tells whether 3 values form a triangle, what type of triangle these form according to sides, and it handles invalid input. */
#include <stdio.h>
#include <math.h>

int isTriangle(int sidespicyboys, int sidekazookid, int sidepepe) {
	int wasteofspace;
	if(sidespicyboys<sidekazookid + sidepepe) {
		if(sidekazookid<sidespicyboys + sidepepe) {
			if(sidepepe<sidespicyboys + sidekazookid) {
				printf("\nThese values form a triangle.\n");
			}
			}
	}
	else {
		printf("\nThese values do not form a triangle. \n");
	}
return wasteofspace;
}
/* The program above tells whether the values form a triangle. */
int triangleType(int sidespicyboys, int sidekazookid, int sidepepe) {
	if(sidespicyboys == sidekazookid && sidespicyboys == sidepepe) {
		 printf("This is an equilateral triangle.\n");
	       }
	if((sidespicyboys == sidekazookid && sidespicyboys != sidepepe) ||(sidespicyboys == sidepepe && sidespicyboys != sidekazookid) ||( sidekazookid == sidepepe && sidekazookid != sidepepe)) {
		 printf("This is an isosceles triangle.\n");
	}
	if((sidespicyboys != sidekazookid && sidespicyboys != sidepepe) || (sidekazookid != sidespicyboys && sidekazookid != sidepepe)) {
		 printf("This is a scalene triangle.\n");
}
return 0;
}
/* The function above tells what type of triangle these values form in terms of sides. */

int sanitizedInput()
{	int x;
	do {
	printf("\nPlease enter a number.\n");
	if(scanf("%d", &x)==0) {
		printf("Not a number!\n");
		while(getchar()!='\n');
	}
	   }while(!(x>=1 && x<=2147483647));

return x;
}
/* The function above handles invalid input. */

int main() {
	int triangulartype;
	int extra;
	int sidespicyboys;
	int sidekazookid;
	int sidepepe;
	int invalid;
	sidespicyboys = sanitizedInput();
	sidekazookid = sanitizedInput();
	sidepepe = sanitizedInput();
	extra = isTriangle(sidespicyboys, sidekazookid, sidepepe);	
	triangulartype = triangleType(sidespicyboys, sidekazookid, sidepepe);		
	return 0;
}
	/* The main function above calls all the others functions. */

