#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
/*int sum(int *a,int *b){
return *a+*b;
}*/
/* //5
void main(){
int *a = (int*)calloc(2,sizeof(int));
printf("Input the first number : ");
scanf("%d",a);
printf("Inputthe second number : ");
scanf("%d",a+1);
printf("the sum of %d and %d is %d",*a,*a+1,*a + *a+1);
}
*/
/* //6
int* max(int *a,int *b){
return *a>*b?a:b;
}
void main(){
int a,b;
printf("Input the first number : ");
scanf("%d",&a);
printf("\nInput the second number : ");
scanf("%d",&b);
printf("\n%d is the maximum number.",*max(&a,&b));
}*/
/* //7
void writearray(int n,int arr[]){
for(int i=0;i<n;i++){ 
printf("element - %d : ",i);
scanf("%d",&arr[i]);
             }
}
void printarray(int n,int arr[]){
printf("The elements you entered are :\n");
for(int i=0;i<n;i++) printf("element - %d : %d\n",i,arr[i]);
}
void main(){
int n;
printf("Input the number of elements to store in the array : ");
scanf("%d",&n);
int *arr = (int*) calloc(n,sizeof(int));
printf("Input %d number of elements in the array :\n",n);
writearray(n,arr);
printarray(n,arr);
}*/
/* //8
int fact(int n){
if(n == 0) return 0 ;
else return n * fact(n-1) ;
}
void permutestring(char s[]){
int n = strlen(s);
char temp;
for(int j,i = 0 ; i < fact(n) ; i++){
for(j = 0 ; j < n-1 ; j++){
temp = s[0] ;
s[j] = s[j+1] ;
		}
s[j] = temp ;6+
printf("%s",s); 
          }
}
void main(){
printf("input string : ") ;
char s[100];
scanf("%s",s) ;
permutestring(s);
}*/
/* //9
void swap(int *a,int *b){
int temp = *a ;
*a = *b ;
*b = temp ;
}
void sort(int n,int a[]){
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j <n ; j++){
if(a[i] > a[j]) swap(&a[i],&a[j]); 
		}
	}
}
void main(){
int n; 
start : printf("Input total number of elements (1 to 100) : ");
scanf("%d",&n); if(n>100) goto start;
int *a = (int*) calloc(n,sizeof(int));
for(int j = 0 ; j < n ; j++){ printf("Number %d :",j+1);
scanf("%d",a+j);}
sort(n,a);
printf("The largest element is : %d",*a);
} */