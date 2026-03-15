#include<stdio.h>
#include<string.h>

int main()
{
	char s1[1000] , s2[500] ;

	printf("Enter 1st string :\t") ;

	scanf("%s", s1) ;

	printf("Enter 2nd string :\t") ;

	scanf("%s", s2) ;

	strcat(s1,s2) ;

	printf("Concatenated string is %s", s1) ;

	return 0 ;

}