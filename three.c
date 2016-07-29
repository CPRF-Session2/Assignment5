#include <stdio.h>
#include <math.h>
/* Takes 3 user-input integers and decides whether it can form triangle*/

void istriangle(int,int,int);
int sanitizedinput(char);
void triangletytpe(int,int,int);

int main(){
int x;
int sanitizedinput(x){
        int true=1;
	int length;
        while (true==1){
        	printf("Enter the length for side %c :",x);
        	scanf("%d",&length);
		if (length<=0){
                        printf("The input is not valid.\n");
                        true=1;}
                else{
                        true=0;
                        return length;}}}

void istriangle(int side1,int side2,int side3){
	int true=0;
	while (true==0){
		if (side1+side2<=side3){	
			true=0;
			printf("That is not a possible triangle.\n");
			int side1=sanitizedinput('1');
			int side2=sanitizedinput('2');
			int side3=sanitizedinput('3');
			continue;}
		else{
			true=1;}}}

void triangletype(int side1, int side2, int side3){	
	if (side1==side2 && side2==side3){
		printf("It is equilateral.\n");}
	else if(side1==side2 || side2==side3 || side3==side1){
		printf("It is an isoceles.\n");}
	else{
		printf("It is a scalene.\n");}}

	int side1=sanitizedinput('1');
	int side2=sanitizedinput('2');
	int side3=sanitizedinput('3');
	istriangle(side1,side2,side3);
	triangletype(side1,side2,side3);
return 0;
}
	
