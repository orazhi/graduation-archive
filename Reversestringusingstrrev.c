#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000] ;

	printf("Enter string for reverse :\t") ;

	gets(s) ;

	strrev(s) ;

	printf("Reversed string :\t %s",s) ;

	return 0 ;

}