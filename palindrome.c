#include <stdio.h>
#include <string.h>

/*initial left = 0, initial right = strlen(w)-2*/
int pal(char w[100], int left, int right){
	if(strlen(w)/2==left || strlen(w)/2==right || right==left)
		return 1;
	if(w[right]!=w[left])
		return 0;
	left++;
	right--;/*checks next letters*/
	pal(w, left, right);
}

int main(){
	printf("Enter a string: ");
	char word[100];
	fgets(word, sizeof(word), stdin);
	if(pal(word, 0, strlen(word)-2))
		printf("\nPalindrome.");
	else printf("\nNot palindrome.");
	return 0;
}
