// Program for Heap sort

#include<stdio.h>
#include<stdlib.h>

void heapSort( int array[] , int n )
{

	void heapify( int array[] , int n , int i )
	{

		int largest = i ;

		int left = ( 2 * i ) + 1 ;

		int right = ( 2 * i ) + 2 ;

		if( ( left < n ) && ( array[ left ] > array[ largest ] ) )
		{
			largest = left ;
		}

		if( ( right < n ) && ( array[ right ] > array[ largest ] ) )
		{
			largest = right ;
		}

		if( largest != i )
		{
			int temp = array[ i ] ;

			array[ i ] = array[ largest ] ;

			array[ largest ] = temp ;

			heapify( array , n , largest ) ;
		}

	}

	for( int i = ( n / 2 ) - 1 ; i >= 0 ; i-- )
	{
		heapify( array , n , i ) ;
	}

	for( int i = n - 1 ; i >= 0 ; i-- )
	{
		int temp = array[ 0 ] ;

		array[ 0 ] = array[ i ] ;

		array[ i ] = temp ;

		heapify( array , i , 0 ) ;
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

	heapSort( array , n ) ;

	printf("\nSorted Array:\n") ;

	for( i = 0 ; i < n ; i++ )
	{
		printf( "\t%d\t", *( array + i ) ) ;
	}

	return 0 ;

}