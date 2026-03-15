#include<stdio.h>
int max2nd(int arr[],int N){
int larg1=0,larg2=0;
for(int i = 0 ; i < N ; i++ ){
if(larg1<arr[i]) larg1 = arr[i] ;
if(larg2<arr[i] && larg1!=arr[i]) larg2 = arr[i] ;
}
return larg2 ;
}
void main(){/*
int year ;
printf("enter year"); scanf("%d",&year);
((year%4==0)||(year%400==0)&&(year%100!=0))?printf("leap"):printf("not leap");
*/
int arr[5];
for(int i = 0 ; i < 5 ; i++)
scanf("%d",&arr[i]);
printf("2nd largest is %d",max2nd(arr,5));
}
