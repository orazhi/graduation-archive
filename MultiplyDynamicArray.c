#include<stdio.h>
#include<stdlib.h>
void scan(int *a,int m,int n){
for(int i = 0 ; i < m ; i++){
for(int j = 0 ; j < n ; j++){
printf("enter %d row %d column value :\t",i+1,j+1) ; scanf("%d",(a+(i*n)+j)) ;
		}
printf("\n") ;
	}
}
int * mulmat(int *a,int *b,int p,int q,int r){
int *ptr = (int *) calloc(p*r,sizeof(int)) ;
for(int i = 0 ; i < p ; i++)
for(int j = 0 ; j < r ; j++)
for(int k = 0 ; k < q ; k++)
*(ptr+(i*r)+j)  += (*(a+(i*q)+k)) * (*(b+(k*r)+j)) ;
return ptr ;
}
void printMat(int *p,int m,int n){
for(int i = 0 ; i < m ; i++){ for(int j = 0 ; j < n ; j++) printf("\t%d\t",*(p+(i*n)+j)) ;
printf("\n\n");
}
	}
void main()
{
int m,n,s;
printf("Enter number of row and column pre matrix:\t") ; scanf("%d %d",&m,&n) ;
int *a = (int *) calloc(m*n,sizeof(int)) ;
printf("Enter number of column for post matrix\t") ; scanf("%d",&s) ;
int *b = (int *) calloc(n*s,sizeof(int)) ;
scan(a,m,n) ; scan(b,n,s) ; int *p = mulmat(a,b,m,n,s) ;
printMat(a,m,n);printf("*");printMat(b,n,s);printf("=");printMat(p,m,s);
free(a); free(b); free(p); 
}