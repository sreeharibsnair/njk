#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node* left,*right;
};
void main()
{
struct node*insert(struct node*, int);
struct node*search(struct node*,int);
struct node*delete(struct node*,int);
void display(struct node*);
int opt,item;
while(1)
{
printf("\n1.Insert.\n2.Delete.\n3.Display.\n4.Search.\n5.Exit.\nYour option : ");
scanf("%d",&opt);
switch(opt)
{
case 1 :printf("Item to insert : ");
	scanf("%d",&item);
	start =insert(start,item);
	break;
case 2 :printf("Item to delete: ");
	scanf("%d",&item);
	start =delete(start,item);
	break;
case 3 :display(start);
	break;
case 4 : printf("Item to search : ");
	scanf("%d",&item);
	if(search(start,item)==(struct node *)0)
		printf("Not Found.....");
	else
		printf("Found.....");
	break;
case 5 : exit(0);
}
}
}
// End of Main function
//Function to insert a node in a linked list
struct node * insert(struct node * s,int data)
{
struct node * t;
t=(struct node *)malloc(sizeof(struct node));
t->data=data; //Fill data
t->left =(struct node *)0; //Attach at begining
list->right=s;
if(s!=0)
s->left=t;
return list;
}
// Function to delete a node
struct node*pop(struct node * list)
{
struct node*t= list;
if (list!=(struct node *)0)
{
printf("deleted item %d",list->data);
list=list->next;
free(t);
}
else
{
printf("list is null ");
return list;
}
}
//Function to display list contents
void display(struct node * list)
{
while(list!=(struct node *)0)
{
printf("%d,",list->data);
list=list->next;
}
return ;
}
//function to search an item
int search (struct node * list,int item)
{
while(list!=(struct node *)0 && item != list->data)
list=list->next;
if(list==(struct node *)0)
return 0;
else
return 1;
}
