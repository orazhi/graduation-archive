// String copy using inbuilt function

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[1000] , *s2 ;

	printf("Enter String to copy :\t") ;

	gets(s1) ;

	strcpy(s2,s1) ;

	printf("String copied in another variable : %s",s2) ;

	return 0 ;

}