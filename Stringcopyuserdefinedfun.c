#include<stdio.h>

char *str_cpy(char *dest ,const char *src)
{
	char *dest1 = dest ;

	while( *dest1++ = *src++ ) ;

	return dest ;

}

int main()
{
	char s1[1000] , s2[1000] ;

	printf("Enter string to copy:\t ") ;

	gets(s1) ;

	str_cpy(s2,s1) ;

	printf("String copied into other variable :\t %s",s2) ;

	return 0 ;

}