#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct empdetail{
char name[20],department[20] ;
int id ;
	};
int main()
{
struct empdetail *e1;
e1  = (struct empdetail *) calloc(1,sizeof(struct empdetail)) ;
strcpy(e1->name,"Ritik");
strcpy(e1->department,"administration"),
e1->id = 1 ,
e1 = realloc(e1,sizeof(struct empdetail)) ,
strcpy((e1+1)->name,"papa"), strcpy((e1+1)->department,"owner"), (e1+1)->id = 1;
for(int i = 0 ; i < 2 ; i++) printf("empdetail %s \n\t%s \n\t%d",(e1+i)->name,(e1+i)->department,(e1+1)->id);
return 0;
}