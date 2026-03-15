/*
#include<stdio.h>
void main(){
int a[30],d[30],f[30],k=0,i,j;
printf("Enter number of numbers you want to enter(max 30):");
int n ;  scanf("%d",&n); printf("Enter %d values:",n);
for(int i = 0 ; i < n ; i++ ){
scanf("%d",&a[i]);
for( j = 0 ; j < i ; j++)
if(a[j] == a[i] ) break;
if(j==i) d[k++] = a[i] ;
}
for( i = 0 ; i < k ; i++){
f[i] = 0 ;
for( j = 0 ; j < n ; j++)
if(a[j] == d[i]) f[i]++;
printf("\nfrequency of %d is %d\n",d[i],f[i]);
}
}
*/

#include<stdio.h>
#include<stdlib.h>
void fq(int *a,int n){
int * d = (int *) calloc(n,sizeof(int)) ;
int * f = (int *) calloc(n,sizeof(int)) ;
int i,j,k=0;
for(i = 0 ; i < n ; i++){
for(j = 0 ; j < i ; j++)
if(*(a+i) == *(a+j)) break;
if(i==j){
*(d+(k++)) = *(a+i) ;
	}
}
for(int i = 0 ; i < k ; i++){
*(f+i) = 0;
for(int j = 0 ; j < n ; j++){
if(*(a+j) == *(d+i)) *(f+i)+=1;
}
printf("\nfrequency of %d is %d\n",*(d+i),*(f+i));
}
free(d); free(f);
}
int main(){
printf("Enter number of elements:\t");
int n ; scanf("%d",&n);
int * a = (int *) calloc(n,sizeof(int)) ;
printf("Enter %d elements : \t",n);
for(int i = 0 ; i < n ; i++) scanf("%d",(a+i));
fq(a,n);
free(a);
return 0 ;
}
