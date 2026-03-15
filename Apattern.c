#include<stdio.h>
int main(){
printf("Enter your limit:\t");
int n,i,j,k;
scanf("%d",&n);
for(i=1;i<2*n;i++){
	k=n;
	for(j=1;j<2*n;j++){
		printf("%d",k);
		if((i!=1)&&(i!=2*n-1)){
			if(i>n){
				if(j<2*n-i) k--;
				if(j>=i) k++;
			}
			else if(j<i) k--;
			else if(j>=2*n-i) k++;
		}
	}
	printf("\n");
}
return 0;
}