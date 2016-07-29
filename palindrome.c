/*Mariposa Lee, checking whether or not a string is a palindrome.
  Current problem: only prints either "string is palindrome" or "string isnt palindrome" no matter what. e.g enter madam -> string is palin, then enter breh -> string is palin (even though breh isn't a palin)*/
#include <stdio.h>
#include <string.h>

int palin(char *str, int left, int right) {
	left = 0;
	right = strlen(str);
	if (str[left]== str[right]){
		if (strlen(str)%2 == 0) {   /*for even-length words*/
		if ((left == right) || 
		    (left+1==right))
		     {
			printf("Your string is a palindrome.\n");} }
		else if (strlen(str)%2 != 0) {
			if ((left+2 == right)) { /*for odd-length words*/
				printf("Your string is a palindrome.\n");} }
	palin(str,left+=1, right-=1);}
	else { printf("Your string is not a palindrome.\n");}
	return 0;
}

int main () {
	char ustr[50];
	int le, ri, hm;
	le = 0;
	ri = strlen(ustr)-(le +1);
	printf("Please enter a string.\n");
	fgets(ustr, sizeof(ustr), stdin);
	hm= palin(ustr, le, ri);

/*
if (hm==1) {
	printf("Your string is a palindrome.\n");}
else {
	printf("Your string is not a palindrome.\n");}
*/
return 0;
}



