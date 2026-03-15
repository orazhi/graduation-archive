// Insertion Sort program

#include<stdio.h>
#include<stdlib.h>

void insertionSort( int array[] , int n )
{
	int value , i , j ;

	for( i = 1 ; i < n ; i++ )
	{

		value = array[ i ] ;

		for( j = i - 1 ; j >= 0 && array[j] > value ; j-- )
		{

			array[ j + 1 ] = array[ j ] ;

		}

		array[ j + 1 ] = value ;

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

	insertionSort( array , n ) ;

	printf("\nSorted Array:\n") ;

	for( i = 0 ; i < n ; i++ )
	{
		printf( "\t%d\t", *( array + i ) ) ;
	}

	return 0 ;

}