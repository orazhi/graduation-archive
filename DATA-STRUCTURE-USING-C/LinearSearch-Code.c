// LInear Search Code Algorithm Using C
#include<stdio.h>
#include<stdlib.h>

/* function Definition of linear seach using iteration method */

int iterative_linearsearch( int arr[] , int n , int key )
{
	int i ;

	for( i = 0 ; i < n ; i++ )
	{
		if( arr[i] == key )
		{
			return i ;
		}
	}

	return -1 ;
}


/* function Definition of linear seach using recursion method */

int recursive_linearsearch( int arr[] , int n , int key )
{
	if( arr[n - 1] == key && n > 0 )
	{
		return n ;
	}

	else
	{
		return recursive_linearsearch( arr , n - 1 , key );
	}

	return -1 ;
}

/* main function for execution of linear search function codes  */

int main(){

	/* Declaration of variables */

	int *arr , n , i , key ;

	/* Input to searching Array */

	printf("Enter Size of array : \t") ;

	scanf("%d", &n) ;

	arr = ( int * ) calloc(n,sizeof(int)) ;

	printf("Enter Input elements of array : \t") ;

	for( i = 0 ; i < n ; i++ )
	{
		scanf("%d", (arr+i)) ;
	}

	/* Input of element to search for i.e. the key to find */

	printf("Enter element to search for : \t") ;

	scanf("%d", &key) ;

	/* Function calling and output */

	i = iterative_linearsearch( arr, n , key ) ;

	printf(" %d is found at %d index of array i.e. at %d position using Iterative method .",key,i,i+1) ;

	i = recursive_linearsearch( arr, n , key ) ;

	printf("\n %d is found at %d index of array i.e. at %d position using recursive method .",key,i,i+1) ;
	
	return 0 ;
}