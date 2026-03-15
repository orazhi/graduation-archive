#include<stdio.h>
#include<stdlib.h>
void main(){
int n ; printf("Input the number of elements to store in array (max 15) : ");
scanf("%d",&n); printf("Input %d number of element ",n);
int *a = (int*) calloc(n,sizeof(int));
for(int i = 0;i<n;i++){
printf("\nelement - %d : ",i+1); scanf("%d",a+i);
	}
printf("The element in reverse order : \n");
for(int i=n-1;i>=0;i--) printf("element - %d : %d",i+1,*(a+i));
}