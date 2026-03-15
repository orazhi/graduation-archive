#include<stdio.h>
void scanMatrix(int mat[][3]){
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
				printf("Enter %dth row %dth column",i+1,j+1);
						scanf("%d",&mat[i][j]);
					}
				}
			}
void printMatrix(int mat[][3]){
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++)
				printf("\t%d\t",mat[i][j]);
									printf("\n\n");
				}
	}
void mulmat(int mat1[][3],int mat2[][3],int mat[][3]){
for(int i = 0 ; i < 3 ; i++)
		for(int j = 0 ; j < 3 ; j++) mat[i][j] = 0 ;
	for(int i = 0 ; i < 3 ; i++)
		for(int j = 0 ; j < 3 ; j++)
				for(int k = 0 ; k < 3 ; k++){
					mat[i][j] += mat1[i][k]*mat2[k][j] ;
printf("%d\t%d\t%d",mat1[i][k],mat2[k][j],mat[i][j]);}
		}
void main(){
int mat1[3][3],mat2[3][3],mat[3][3];
scanMatrix(mat1); scanMatrix(mat2); printf("\n");
printMatrix(mat1);printf("\n\t\t*\n");printMatrix(mat2);
mulmat(mat1,mat2,mat); printf("\n\t\t=\n"); printMatrix(mat) ;
}