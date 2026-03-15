#include<stdio.h>
#include<stdlib.h>
/* //18
struct altloc{
char name[20];
char location[50];
struct altloc *p;
	};
void main(){
struct altloc s;
struct altloc *s1 = (struct altloc*) calloc(1,sizeof(struct altloc));
s1 = &s;
printf("Enter  Name :");
scanf("%s",s1->name);
printf("Enter change location :");
scanf("%s",s1->location);
printf("%s Alter from %s and his data is stored in pc at address %p",s1->name,s1->location,s1);
}*/ //19
/*
union title{
char name[20];
union title *p;
	};
void main(){
printf("enter name : ");
union title t;
union title *t1 = (union title*) calloc(1,sizeof(union title));
t1 = &t;
t1->p = t1 ;
scanf("%s",t.name);
printf("%s stored at %p",t1->name,t1->p);
	}
*/ //20
struct empdetail{
char name[20];
unsigned short int id;
	};
void main(){
printf("Number of employee currently in office : ");
unsigned short int n; scanf("%hu",&n);
struct empdetail *e = (struct empdetail*) calloc(n,sizeof(struct empdetail));
for(int i = 0 ; i < n ; i++){
printf("enter id number : "); scanf("%hu",&(e+i)->id);
printf("enter name : "); scanf("%s",(e+i)->name);
	}
printf("The entered data :\n");
for(int i = 0 ; i < n ; i++) printf("Employee name : %s\nEmployee Id : %hu\n",(e+i)->name,(e+i)->id);
printf("\nsaved successfully at %p",e);
free(e); printf("we free address%p",e);
}