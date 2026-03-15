#include<stdio.h>
/* //10
int string_length(char s[]){
int i=0;
while(s[i] != '\0') i++;
return i;
}
void main(){
printf("Input a string : ");
char s[100];
scanf("%s",s);
printf("The length of the given string %s is : %d",s,string_length(s));
}*/ //11
/* void swap(int *a,int *b,int *c){
int temp = *a;
*a = *c;
*c = *b;
*b = temp;
}
void main(){
int a,b,c;
printf("Input the value of 1st element : ");
scanf("%d",&a);
printf("input the value of 2nd element : ");
scanf("%d",&b);
printf("Input the value of 3rd element : ");
scanf("%d",&c);
printf("The value before swapping are :\nelement 1 = %d\nelement 2 = %d\nelement 3 = %d\n\n",a,b,c);
swap(&a,&b,&c);
printf("the value after swapping are :\nelement 1 = %d\nelement 2 = %d\nelement 3 = %d\n",a,b,c);
} */
/*
//12
unsigned long int fact(int *n){
unsigned long int fac  = 1 ;
if(*n >1) for(int i = 2 ; i <= *n ; i++) fac *= i ;
return fac ;
}
void main(){
int n;
printf("Input a number : ");
scanf("%d",&n);
printf("The Factorial of %d is : %lu",n,fact(&n));
}*/
/* //13
void string_upper(char s[]){
int i = 0 ;
while(s[i] != '\0'){
if(s[i] >=97 && s[i] <= 122) s[i] -= 32 ;
else goto loop;
loop: ++i;
  }
}
void vococount(char s[],int a[2]){
int i = 0 , v = 0 , c = 0 ;
string_upper(s);
while(s[i] >= 65 && s[i]<=90){
switch(s[i]){
case 65: case 69: case 73: case 79: case 21: v++ ; break;
default : c++ ;
}
i++ ;
     }
a[0] = v ;
a[1] = c ;                
}
void main(){
printf("Input a string : ");
char s[101] ;
scanf("%s",s);
int a[2];
vococount(s,a);
printf("Number of vowels : %d\nNumber of consonant : %d",a[0],a[1]);
}*/