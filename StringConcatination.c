#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void str_cat(char *s1,char *s2){
int l1 = strlen(s1) , l2 = strlen(s2) , i ;
for( i = l1 ; i < l1 + l2 ; i++ )
	*( s1 + i ) = *( s2 + i - l1 ) ;
*( s1 + i ) = '\0'	;
}
void main(){
printf("Enter string 1 :\t");
char s1[101] , s2[50] ;
scanf("%s",s1);
printf("Enter string s2 :\t");
scanf("%s",s2);
str_cat(s1,s2);
printf("concatenated string :\t %s",s1);
}