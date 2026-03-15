// Bubble sort code program

#include<stdio.h>
#include<stdlib.h>

void bubbleSort( int array[] , int n )
{
	int i , isSorted = 0 ;

	while( !isSorted )
	{

		isSorted = 1 ;

		for( i = 0 ; i < n - 1 ; i++ )
		{
			if( array[ i ] > array[ i + 1 ] )
			{

				int temp = array[ i ] ;

				array[ i ] = array[ i + 1 ] ;

				array[ i + 1 ] = temp ;

				isSorted = 0 ;

			}
		}

		n-- ;

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

	bubbleSort( array , n ) ;

	printf("\nSorted Array:\n") ;

	for( i = 0 ; i < n ; i++ )
	{
		printf( "\t%d\t", *( array + i ) ) ;
	}

	return 0 ;

}