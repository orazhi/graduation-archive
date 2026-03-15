#include<stdio.h>

int str_len( const char *s )
{
	int i = 0 ; // initialising counting variable

	while( *s++ != '\0' )
	{
		i++ ;
	}

	return i ;
}

int main()
{
	char s[1000] ;

	printf("Enter Word :\t") ;

	gets(s) ;

	printf("Length of given string is :\t %d",str_len(s)) ;

	return 0 ;
}