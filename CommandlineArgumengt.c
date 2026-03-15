#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
int main(int argc,char **arg)
{
float percent = 0.0 ;
if(argc>4) printf("too many arguments");
else if(argc<4) printf("too few arguments");
else
{
for(int i = 0 ; i < 3 ; i++) percent += atof(*(arg+1+i))/3 ;
printf("the percentage of given marks is %4.2f",percent);
	}
} 
*/
char * string_concat(char *s1,char *s2)
{
int n = strlen(s1) ; int m = strlen(s2) ;
char *ptr = (char*) calloc(m+n+1,sizeof(char)) ;
for(int i = 0 ; i < m+n+1 ; i++){
if(i<n) *(ptr+i) = *(s1+i) ;
else if(i>=n) *(ptr+i) = *(s2+i-n) ;
else *(ptr+i) = '\0' ;
	}
return ptr ;
}
void main()
{
char s1[100] ; 
char s2[100] ;
printf("enter pre string :\t") ; scanf("%s",s1) ;
printf("enter post string :\t") ; scanf("%s",s2) ;
char *s = string_concat(s1,s2) ;
printf("concatenated string %s",s) ;
free(s) ;
}