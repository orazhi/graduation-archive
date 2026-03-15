#include<stdio.h> 
#include<math.h>
#define pi 3.141592
void main()
{
/*
first of all we need to calculate length of diameter. 
it is double of radius 
and area = pi * r squared   
*/
float x1,y1,x2,y2;
printf("Enter coordinate 1: "); scanf("%f,%f",&x1,&y1);
printf("Enter coordinate 2:"); scanf("%f,%f",&x2,&y2);
float r=sqrt(pow(x2-x1,2)+pow(y2-y1,2))/2;
printf("since radius of circle is %f thus Area must equals %f",r,pi*r*r);
} 
/*
struct student{
char name[50] ;
int roll ;
} ;
void main()
{
struct student s1 = {"Ritik",38} ;
printf("student s1 detail %s %d",s1.name,s1.roll);
} */