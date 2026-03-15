#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * strrev(char *s)
		{
			char *r = (char *) calloc(strlen(s)+1,sizeof(char)) ; 
		for(int i = strlen(s) - 1 ; i >= 0 ; i--) *(r-i+strlen(s)-1) = *(s+i) ;
					*(r+strlen(s)) = '\0' ;		return r ;
		}
int palstr(char *s)
	{
			char *p = strrev(s) ;	if(strcmp(s,p)==0) return 1; else return 0; free(p) ;
	}
int main()
{
		char s[100];
	printf("Enter string :\t"); scanf("%s",s) ;
			 if(palstr(s) == 1) printf("%s is a palindrome string.",s) ;
					else printf("%s is not a palindrome",s) ;
return 0 ;
}