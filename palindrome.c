#include <stdio.h>
#include <math.h>
#include <string.h>

int Palindrome_test(char *inputString, int leftpart, int rightpart);

int main(){
	char inputString [100];
	printf("Enter string of letters: ");
	scanf("%s", inputString);
	if(Palindrome_test(inputString, 0, strlen(inputString) - 1)){
		printf("Palindrome\n");
		}
	else{
		printf("Not palindrome\n");
		}
	getchar();
	return 0;
	}
int Palindrome_test(char *inputString, int leftpart, int rightpart){
	if (leftpart >= rightpart)
		return 1;
	if (inputString[leftpart] == inputString[rightpart]){
		return Palindrome_test(inputString, leftpart + 1, rightpart - 1);
		}
		return 0;
		}
