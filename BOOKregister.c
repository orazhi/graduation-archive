#include<stdio.h>
/*
int string_length(char *s){
		int i = 0 ;
		while(*(s+i) != '\0') i++ ;
						return i ;
					}
void main(){
	printf("Enter String :\t");
		char s[100] ; scanf("%s",s) ;
				printf("Length of given String :\t%d",string_length(s)) ;
}
*/
struct book
{
char name[30];	float price ;	int pages ;
};
int main(){
struct book b ;
FILE *fp = fopen("books.txt","a+");
if(fp == NULL)	return 0 ;
else if(ftell(fp)==0)	fprintf(fp,"BOOK NAME\t BOOK PRICE\t PAGES\n");
decn : printf("Enter non zero for EXIT 1 for writing and 0 for reading books records.") ;
int d ;	scanf("%d",&d);
if(d==0){
fseek(fp,0,SEEK_SET) ;
while(fscanf(fp,"%c",&d)==1)
fprintf(stdout,"%c",d);
}
else if(d==1)
{
printf("Enter name of book :\t"); scanf("%s",b.name);
printf("Enter price of %s book :\t",b.name);
scanf("%f",&b.price);
printf("Enter pages of %s book :\t",b.name);
scanf("%d",&b.pages);
fprintf(fp,"%s\t%f\t%d\n",b.name,b.price,b.pages);
}
else{
fclose(fp); return 0;
}
goto decn ;
}