//Matthew Kellerman- sees if string is palindrome
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int pal(char arr2[100],int x, int flag){



if(tolower(arr2[x])!= tolower(arr2[flag])){
//tells function to return 0(false) if string is not palindrome
	return 0;}
//ends code if 0 is returned
else if(x>=flag){

//	returns 1 if x is  equal to (for odd strings) or greater than(for even strings) flag
	return 1;
}

//when x is greater than flag, function stops
else
x++;
flag-=1;
	return pal(arr2, x, flag);
//updates values
}

int main()
{
	int x =0;
	//arr[x] is the beginning of the string
	char arr[100]= {};
printf("Please enter a string: ");
fgets(arr,sizeof(arr),stdin);

arr[strlen(arr)-1]='\0';
int flag = strlen(arr)-1;
//flag is the end of the string
int hopefullyWorks = pal(arr, x, flag);
//passes value to function
if(hopefullyWorks)
	//if 1 is returned
	printf("Your string is a palindrome.\n");
else{
	//if 0 is returned
printf("Your string is not a palindrome.\n");
}
return 0;
}
