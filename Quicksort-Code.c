// Quick Sort program

#include<stdlib.h>
#include<stdio.h>

void swap( int *a , int *b )
{

	int temp = *a ;

	*a = *b ;

	*b = temp ;

}

void quickSort( int array[] , int start , int end )
{

	int pivot( int array[] , int start , int end )
	{

		int i , p , pivotelement ;

		p = start ;

		pivotelement = array[ p ] ;

		i = start + 1 ;

		while( i <= end )
		{

			if( array[ i ] <= pivotelement )
			{

				p++ ;

				swap( &array[ i ] , &array[ p ] ) ;

			}

			i++ ;

		}

		swap( &array[ p ] , &array[ start ] ) ;

		return p ;

	}

	if( start < end )
	{

		int pivotindex = pivot( array , start , end ) ;

		quickSort( array , start , pivotindex ) ;

		quickSort( array , pivotindex + 1 , end ) ;

	}

}

int main()
{

	int *array , n , i ;

	printf("Enter size of array :\t") ;

	scanf("%d", &n) ;

	array = ( int * ) calloc( n , sizeof( int ) ) ;

	printf("Enter %d array element values :\t", n) ;

	for( i = 0 ; i < n ; i++ )
	{
		scanf( "%d", ( array + i ) ) ;
	}

	quickSort( array , 0 , n -1 ) ;

	printf("\nSorted Array:\n") ;

	for( i = 0 ; i < n ; i++ )
	{
		printf( "\t%d\t", *( array + i ) ) ;
	}

	free( array ) ;

	return 0 ;

}