#include <stdio.h>

int isTriangle(int x, int y, int z){/*checks triangle sides for legality*/
	if(x+y<z || x+z<y || y+z<x)
		return 0;
	return 1;
}

void triangleType(int x, int y, int z){/*checks triangle type*/
	if(x==y && y==z && x==z)
		printf("\nEquilateral");
	else if(x==y || y==z || x==z)
		printf("\nIsosceles.");
	else printf("\nScalene.");
}

int sanitizedInput(){/*gets valid input>0*/
	char line[100];
	int num;
	while(1){
		printf("\nEnter a number: ");
		fgets(line, sizeof(line), stdin);
		if(sscanf(line, "%d", &num)&& num>0)
			return num;
		printf("\n You did not enter a valid number.");
	}
}
int main(){
	int a, b, c;
	a = sanitizedInput();
	b = sanitizedInput();
	c = sanitizedInput();
	triangleType(a,b,c);
	if(isTriangle(a,b,c))
		printf("\nIs triangle.");
	else printf("\nIs not triangle.");
	return 0;
}

