// Program for Binary Search

#include<stdio.h>
#include<stdlib.h>

/* Binary Search function using recursion */

int recursiveBinarySearch( int array[] , int start , int end , int key )
{
	if( start <= end )
	{
		int mid = ( start + end ) / 2 ;
		if( array[mid] == key )
		{
			return mid ;
		}
		else
		{
			if( array[mid] < key )
			{
				return recursiveBinarySearch( array , mid + 1 , end , key ) ;
			}
			else
			{
				return recursiveBinarySearch( array , start , mid - 1 , key ) ;
			}
		}

	}

	return -1 ;
}

/* Binary Search function using Iteration */

int iterativeBinarySearch( int array[] , int start , int end , int key )
{
	int i = start , j = end ;
	while( i <= j )
	{
		int mid = ( i + j ) / 2 ;
		if( array[mid] == key )
		{
			return mid ;
		}
		else
		{
			if( array[mid] > key )
			{
				j = mid - 1 ;
			}
			else
			{
				i = mid + 1 ;
			}
		}
	}

	return -1 ;
}

/* Main function for execution of binary search function */

int main()
{
	int *array , n , key , i ;

	printf("Enter size of Array : \t") ;

	scanf("%d", &n) ;

	array = ( int * ) calloc( n , sizeof(int) ) ;

	printf("Enter %d values of array in sorted sequence:\n", n) ;

	for( i = 0 ; i < n ; i++ )
	{
		scanf("%d", &array[i]) ;
	}

	printf("Enter value to search for : \t") ;

	scanf("%d", &key) ;

	i = recursiveBinarySearch( array , 0 , n-1 , key ) ;

	if( i != -1 )
	{

	printf("\nElement is found at : %d index i.e. %d position. \n Using recursion", i, i + 1) ;
	
	}

	else
	{
		printf("\n Element not found.(Recursive function)") ;
	}

	i = iterativeBinarySearch( array , 0 , n-1 , key ) ;

	if( i != -1 )
	{

	printf("\nElement is found at : %d index i.e. %d position. \n Using iteration", i, i + 1) ;
	
	}

	else
	{
		printf("\n Element not found.(Iterative function)") ;
	}

	return 0 ;

}