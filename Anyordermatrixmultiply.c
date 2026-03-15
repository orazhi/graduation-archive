#include<stdio.h>
#include<stdlib.h>
void scanMatrix(int *a,int row,int col){
	for(int i = 0; i<row; i++)
		for(int j = 0; j<col;j++)
				scanf("%d",(a+(i*col)+j));
}
void printMatrix(int *a,int row,int col){
	for(int i = 0; i<row; i++)
		for(int j = 0; j<col;j++)
				printf("\t%d\t",*(a+(i*col)+j));
}
void mulMat(int *a,int *b,int *c,int m,int n,int q){
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			for(int k=0;k<q;k++)
				c[i][j] += a[i][k]*b[k][j];
}
int main(){
printf("Enter order of prefactor:\t");
int m,n,q;
printf("Enter column of postfactor:\t");
scanf("%d %d",&m,&n);
int *a = (int*) calloc(m*n,sizeof(int));
int *b = (int*) calloc(n*q,sizeof(int));
int *c = (int*) calloc(m*q,sizeof(int));
printf("Enter values for prefactor:\n");
scanMatrix(a,m,n);
printf("Enter values for postfactor:\n");
scanMatrix(b,n,q);
mulMat(a,b,c,m,n,q);
printMatrix(c,m,q);
}