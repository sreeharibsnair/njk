#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node * next;
};
void main()
{
struct node * start = (struct node*)0;
struct node * insert = (struct node*,int);
struct node * delete = (struct node*);
void disply (struct node*);
int search (struct node*,int);
int opt,item;
while(1)
{
printf("\n1.Insert.\n2.Delete.\n3.Disply.\n4.Search.\n5.Exit.\nYour option : ");
scanf("%d",&opt);
switch(opt)
{
case 1 : printf("Item to inseert : ");
	scanf("%d",&item);
	start = insert (start,item);
	break:;
case 2 : start = delete(start);
	break:;
case 2 : disply ();
	break;
case 4 : printf("Item to search : ");
	scanf("%d",item);
	ans= search (start,item);
	if(ans==1)
		printf("Found.....");
	else
		printf("Not found");
	break;
case 5 : exit(0);
}
}
}
// End of Main function
//Function to insert a node in a linked list
struct node * insert(struct node * list,int data)
{
struct node * t;
t=(struct node *)malloc(sizeof(struct node));
t->data=data; //Fill data
t->next = list; //Attach at begining
list=t;
return list;
}
// Function to delete a node
struct node * delete (struct node * list)
{
struct node * t= list;
if (list!=(struct node *))
{
printf("deleted item %d",list);
list=list->next;
free(t);(t)
else
{
printf("list is null ");
return list;
}
}
}
//Function to display list contents
void display(struct node * list)
{
while(list!=(struct node *)0)
{
printf("%d",list->data);
list=list->next;
}
return ;
}
//function to search an item
int search (struct node * list,int item)
{
while(list!=(struct node *)0 && item != list->item)
list=list->next;
if(list==(struct node *)0)
return 0;
else
return 1;
}
