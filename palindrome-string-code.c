// palindrome string function

#include<stdio.h>
#include<string.h>

void ispalindromeString( const char *s )
{
	const char *p = s ;

	while( *( p++ ) != '\0' ) ;

	while( *( --p ) == '\0' ) ;

	for( ; p != s ; --p , ++s )
	{

		if( *p  != *s )
		{
			break ;
		}

	}

		if( p == s )
		{
			printf("String is palindrome") ;
		}

		else
		{

			printf("String is not palindrome") ;
		}
}

int main()
{

/*

	char str1[100] , *str ;

	printf("Enter string:\n") ;

	gets(str1);

	strcpy( str , str1 ) ;

	strrev( str1 ) ;

	int i , temp = 0 ;

	for( i = 0 ; i < strlen( str1 ) ; i++ )
	{

		if( str[i] != str1[i] )
		{
			temp = 1 ;
		}

		if( temp == 0 )
		{
			printf("\npalindrome") ;
		}

		else
		{
			printf("\nno palindrome") ;
		}
	}

*/

	char s[100] ;

	printf("Enter string for checking\t") ;

	scanf( "%s", s ) ;

	ispalindromeString( s ) ;

	return 0 ;

}