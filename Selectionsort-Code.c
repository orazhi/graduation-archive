// Selection sort program

#include<stdio.h>
#include<stdlib.h>

void selectionSort( int array[] , int n )
{

	int i , j , temp , min ;

	for( i = 0 ; i < n ; i++ )
	{

		min = i ;

		for( j = i + 1 ; j < n ; j++ )
		{
			if( array[ j ] < array[ min ] )
			{
				min = j ;
			}
		}

		if(min != i)
		{
	
			temp = array[ min ] ;

			array[ min ] = array[ i ] ;

			array[ i ] = temp ;

		}
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

	selectionSort( array , n ) ;

	printf("\nSorted Array:\n") ;

	for( i = 0 ; i < n ; i++ )
	{
		printf( "\t%d\t", *( array + i ) ) ;
	}

	return 0 ;

}