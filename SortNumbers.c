#include<stdio.h>
void swap(int *a,int *b){
int temp = *a ;
*a = *b ;
*b = temp ;
}
void sort(int arr[],int n){
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < n ; j++){
if(arr[i] < arr[j]) swap(&arr[i],&arr[j]) ;
       }
      }
}
void main(){
int n ;
printf("Input number of elements to store in an array : ");
scanf("%d",&n);
int arr[n] ;
printf("input %d number of elements in the array :",n);
for(int i = 0 ; i < n ; i++){
printf("\nelement-%d : ",i+1);
scanf("%d",&arr[i]);
        }
sort(arr,n);
printf("The elements in the array after sorting :");
for(int i = 0 ; i < n ; i++){
printf("\nelement-%d : %d",i+1,arr[i]);
       }
}