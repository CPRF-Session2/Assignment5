/* Jared Wasserman -- palindrome.c */
/*This program takes a string of input and returns if it is a palindrome or not.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int pal(char arr[100],int i){
	if(i==(strlen(arr)/2)&&(strlen(arr)%2==1)){
		return 1;				
	}else if(tolower(arr[i])==tolower(arr[strlen(arr)-i-1])){
		if(i==(strlen(arr)/2)&&strlen(arr)%2){
			return 1;
		}else if(i==(strlen(arr)/2)&&tolower(arr[i])==tolower(arr[strlen(arr)-i-1])){
			return 1;
		}else{
			return pal(arr,i+1);	
		}
	}else{
		return 0;
	}
}

int main(){

	char input[100];
	printf("Enter a string: ");
	fgets(input,sizeof(input),stdin);
	input[strlen(input)-1]='\0';
	if(pal(input,0)){
		printf("%s is a palindrome.\n",input);
	}else{
		printf("%s is not a palindrome.\n",input);
	}
	
return 0;
}
