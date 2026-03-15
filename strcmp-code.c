// program to compare two string using inbuilt function

#include<stdio.h>
#include<string.h>

int main()
{

	char s1[1000] , s2[1000] ;

	printf("Enter first string :\t") ;

	scanf("%s", s1) ;

	printf("Enter second string :\t") ;

	scanf("%s", s2) ;

	int i = strcmp(s1,s2) ;

	if( i > 0 )
	{
		printf("First String : %s is greater",s1) ;
	}

	else
	{
		if( i < 0 )
		{
			printf("Second string : %s is greater",s2) ;
		}

		else
		{
			printf("Both strings are equal : %s",s1) ;
		}
	}

	return 0 ;

}
