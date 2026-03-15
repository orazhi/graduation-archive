#include<stdio.h>
void main(){/*
int r = 5,i,j;
for(i=0;i<r;i++){
for(j=0;j<r-i;j++) printf(" * ");
printf("\n");
}
int c(int n,int r){
int fact(int n){
if(n <= 1) return 1;
else return fact(n-1)*n;
}
return fact(n)/(fact(r)*fact(n-r));
}
printf("Enter number of rows :");
scanf("%d",&r);
for(i=0 ; i<r ; i++){
for(j = 0; j<r-i;j++)
printf("  ");
for(j = 0 ; j<= i ; j++ )
printf("%d  ",c(i,j));
printf("\n");
}
int fibo(int n){
int t1=0,t2=1,tn=0;
for(int i = 1 ; i <=n;i++){
printf("%d\t",tn);
tn = t1 + t2;
t2 = t1 ;
t1 = tn ;
}
return 0;
}
fibo(r); */
printf("\n\n\n");
int max(int a[],int n){
if(n==1) return a[n]>a[n-1]?a[n]:a[n-1];
else return max(a,n-1)>a[n]?max(a,n-1):a[n];
}
int a[10];
for(int i = 0 ; i <10;i++) scanf("%d",&a[i]);
printf("maximum value = %d",max(a,10));
/*
int n1,n2;
scanf("%d %d",&n1,&n2);
printf("\t   %d \n  \t x %d \n\t  _____ \n%d x %d is %d \n%d x %d is %d \n",n1,n2,n2%10,n1,n1*(n2%10),n2/10,n1,n1*(n2/10));
printf("_________________\nADD THEM  %d \n________________",n1*n2);
*/
}