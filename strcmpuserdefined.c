// program to compare two string with user defined function

#include<stdio.h>

int str_cmp( const char *s1,const char *s2 )
{
	for(;*s1 != '\0' && *s2 != '\0';s1++,++s2)
	{
		if( *s1 > *s2 )
		{
			return 1 ;
		}

		if( *s1 < *s2 )
		{
			return -1 ;
		}
	}

	if( *s1 != '\0' )
	{
		return 1 ;
	}

	if( *s2 != '\0' )
	{
		return -1 ;
	}

	return 0 ;
}

int main()
{

	char s1[1000] , s2[1000] ;

	printf("Enter first string :\t") ;

	scanf("%s", s1) ;

	printf("Enter second string :\t") ;

	scanf("%s", s2) ;

	int i = str_cmp( s1 , s2 ) ;

	if( i > 0 )
	{
		printf("First string is greater:%s",s1) ;
	}

	else
	{
		if( i < 0 )
		{
			printf("Second string is greater:%s",s2) ;
		}

		else
		{
			printf("Both string are equal:%s",s2) ;
		}
	}

	return 0 ;

}
