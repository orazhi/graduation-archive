#include<stdio.h>
#include<stdlib.h>
void writearray(int a[],int n){
printf("Input %d number of elements in the array :\n",n);
for(int i = 0 ; i < n ; i++){
printf("element - %d : ",i+1);
scanf("%d",a[i]);
   }
}
/* int sumarray(int arr[],int n){
int sum = 0 ;
for(int i = 0 ; i < n ; i++){
sum += arr[i] ; 
    }
return sum ;
}
void main(){
start : printf("Input the number of elements to store in the array(max 10) : ");
int n ; scanf("%d",&n);
if(n>10) goto start;
int *arr = (int*) calloc(n,sizeof(int)); writearray(arr,n); 
printf("The sum of array is : %d",sumarray(arr,n));
} */
void main(){begin:
printf("Input the number of elements to store in the array (max 15) : ");
int n ; scanf("%d",&n); if(n<0 && n>15) goto begin;
int *a = (int*) calloc(n,sizeof(int)) ;
writearray(a,n) ;
printf("The elements of array in reverse order are :");
for(int i = n-1 ; i <= 0 ; i--) printf("/nelement - %d : %d",i+1,*a+i);
}