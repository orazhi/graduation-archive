// String length calculation using inbuilt function

#include<stdio.h>
#include<string.h>

int main()
{
	
	char s[1000] ; // Declaration of variable for input 
	
	printf("Enter a word:") ;
	
	gets(s) ;
	
	printf("Length of given String is %d",strlen(s)) ; // printing length of string
	
	return 0 ;
	
}
