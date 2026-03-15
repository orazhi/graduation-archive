// Merge Sort program

#include<stdio.h>
#include<stdlib.h>

void mergeSort( int array[] , int auxarray[] , int start , int end )
{
	void merge( int array[] , int auxarray[] , int start , int pivot , int end )
	{

		int k = start , i = start , j = pivot + 1 ;

		while( i <= pivot && j <= end )
		{
			if( array[ i ] <= array[ j ] )
			{
				auxarray[ k ] = array[ i ] ;

				i++ ;
			}

			else
			{
				auxarray[ k ] = array[ j ] ;

				j++ ;
			}

			k++ ;
		}

		if( i <= pivot )
		{
			while( i <= pivot )
			{
				auxarray[ k ] = array[ i ] ;

				i++ ;

				k++ ;
			}
		}

		else
		{
			while( j <= end )
			{
				auxarray[ k ] = array[ j ] ;

				j++ ;

				k++ ;
			}
		}

		for( k = start ; k <= end ; k++ )
		{
			array[ k ] = auxarray[ k ] ;
		}
	}

	if( start < end )
	{

		int pivot = ( start + end ) / 2 ;

		mergeSort( array , auxarray , start , pivot ) ;

		mergeSort( array , auxarray , pivot + 1 , end ) ;

		merge( array , auxarray , start , pivot , end ) ;

	}
}

int main()
{

	int *array , *auxarray , n , i ;

	printf("Enter size of array :\t") ;

	scanf("%d", &n) ;

	array = ( int * ) calloc( n , sizeof( int ) ) ;

	auxarray = ( int * ) calloc( n , sizeof( int ) ) ;

	printf("Enter %d array element values :\t", n) ;

	for( i = 0 ; i < n ; i++ )
	{
		scanf( "%d", ( array + i ) ) ;
	}

	mergeSort( array , auxarray , 0 , n -1 ) ;

	printf("\nSorted Array:\n") ;

	for( i = 0 ; i < n ; i++ )
	{
		printf( "\t%d\t", *( array + i ) ) ;
	}

	free( array ) ;
 
	free( auxarray ) ;

	return 0 ;

}
