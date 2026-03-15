
#include <stdio.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC

void selectionSort(int N[],int n)
{
	int i,j,min,t;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
			if(N[j]<N[min]) min=j;
		t=N[i];
		N[i]=N[min];
		N[min]=t;
	}
}

void insertionSort(int N[],int n)
{
	int i,j,v;
	for(i=1;i<n;i++)
	{
		v=N[i];
		for(j=i-1;j>=0&&N[j]>v;j--)
			N[j+1] = N[j] ;
		N[j+1]=v;
	}
}

void bubbleSort(int N[],int n)
{
	int i,temp,swap=1;
	for(;swap;n--)
	{
		swap=0;
		for(i=0;i<n-1;i++){
printf("\n%d>%d\n",N[i],N[i+1]);
			if(N[i]>N[i+1])
			{
				temp = N[i];
				N[i] = N[i+1] ;
				N[i+1] = temp ;
printf("\nN[%d]=%d,N[%d]=%d\n",i,N[i],i+1,N[i+1]);
				swap++;
			}}
	}
}
 
// main function to find the execution time of a C program
int main()
{
    // to store the execution time of code
    double time_spent = 0.0;
	 int NB[] = {0,1,2,3,4,5,6,7,8,9} ;
 	 int NA[] = {3,9,7,4,1,2,5,6,0,8} ;
	 int NW[] = {9,8,7,6,5,4,3,2,1,0} ;

    clock_t begin = clock(); 
		printf("\n%f\n",begin);	
	 //selectionSort(NW,10);
	 //insertionSort(NW,10);
	 bubbleSort(NW,10);
    clock_t end = clock();
		printf("\n%f\n",end);

	 for(int i=0;i<10;i++)
		 printf(" %d ",NW[i]);
 
    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
    printf("The elapsed time is %f seconds", time_spent);
 
    return 0;
}