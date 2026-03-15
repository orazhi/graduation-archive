#include<stdio.h>
#include<string.h>
int main(){
printf("Enter a string :\n");
char s[100] ;
gets(s);
strlwr(s);
int v=0,c=0,i=0 ;
while(s[i]!='\0'){
if(s[i] >= 97 && s[i] <= 122)
/*
switch(s[i]){
case 97 : 
case 101 : 
case 105 : 
case 111 :
case 117 : v++ ; break ;
default : c++ ;
}
*/
if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
v++;
else c++;
i++ ;
}
printf("number of vowels : %d\n number of consonant : %d",v,c);
return 0 ;
}