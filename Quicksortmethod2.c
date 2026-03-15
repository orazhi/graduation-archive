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

		int i , j , p , pivotelement ;

		pivotelement = array[ start ] ;

		i = start + 1 ;

		j = end ;

		do
		{

			while( array[ i ] <= pivotelement )
			{

					i++ ;

			}

			while( array[ j ] > pivotelement )
			{

					j-- ;

			}

			if( i < j )
			{

			swap( &array[ i ] , &array[ j ] ) ;

			}

		}

			while( i < j ) ;

		swap( &array[ j ] , &array[ start ] ) ;

		return j ;

	}

	if( start < end )
	{

		int partitionindex = pivot( array , start , end ) ;

		quickSort( array , start , partitionindex - 1 ) ;

		quickSort( array , partitionindex + 1 , end ) ;

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