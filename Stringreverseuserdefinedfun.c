// Program to reverse string with user defined function

#include<stdio.h>
#include<string.h>

void str_rev( char *s , int begin , int end )
{

	if(begin <= end)
	{
		char c = *( s + begin ) ;

		*( s + begin ) = *( s + end ) ;

		*( s + end ) = c ;

		str_rev( s , ++begin , --end ) ;
	}
	
}

int main()
{

	char s[1000] ;

	printf("Enter String to reverse :\t") ;

	gets(s) ;

	str_rev( s , 0 , strlen(s) - 1 ) ;

	printf("Reverse String is :\t %s", s) ;

	return 0 ;

}