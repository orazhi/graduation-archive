#include<stdio.h>
#include<stdlib.h>
struct node{
unsigned short int data;
struct node *next;
	};
struct node * createnode(unsigned short int val){
struct node *s = (struct node*) calloc(1,sizeof(struct node));
s->data = val ;
s->next = NULL ;
return s ;
	}
struct node * insertbeginnode(unsigned short int val,struct node *head){
struct node *nd = createnode(val);
nd->next = head;
head = nd;
return nd;
	}
struct node * insertnode(unsigned short int val,struct node *head){
struct node *ptr = head;
while(ptr->next != NULL){
ptr=ptr->next;
		}
struct node *newnode = createnode(val);
ptr->next=newnode;
return head;
	}
void displaylist(struct node *s){
printf("Data entered in the list : ");
struct node *cur = s;
int count=0;
while(cur != NULL){
printf("Data = %hu",cur->data);
cur = cur->next ;
count++;
		}
printf("\n");
printf("Total number of nodes = %d",count);
	}
void revdisplaylist(struct node *s){
printf("The list in reverse are :\n");
struct node *cur = s,*ptr = s;
int count = 0;
while(cur != NULL){
cur = cur->next;
count++;
}
int *a = (int*) calloc(count,sizeof(unsigned short int));
int i=0;
while(ptr != NULL){
a[i] = ptr->data;
ptr = ptr->next ;
i++;
}
for(;count>=0;count--) printf("Data = %hu",a[count]);
		}
void main(){
printf("Input the number of nodes : ");
unsigned short int n ; scanf("%hu",&n);
struct node *head = (struct node*) calloc(1,sizeof(struct node));
for(int i = 0; i<=n ; i++){
printf("Input data for node %d : ",i);
unsigned short int m; scanf("%hu",&m);
head = insertnode(m,head);
		}
// for 24 
//printf("data after insrted in the list are : \n");
displaylist(head);
revdisplaylist(head);
	}