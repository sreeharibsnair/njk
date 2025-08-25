#include <stdio.h>
#include <stdlib.h>

int stack[100];
int sp=-1,size=10;

void main()
{
  void push (int);
  int pop(),opt,item;
  void display ();
  do
  {
  printf("\n1.Push\n2.Pop\n3.display\n4.exit\nyour option : ");
  scanf("%d",&opt);
  switch (opt)
  {
    case 1:printf("item to push : " );
           scanf("%d",&item);
           push(item);
           break;
    case 2:item =pop();
           printf("poped item = %d",item);
           break;
    case 3:display();
           break;
    case 4:exit(0);
  }
  }
  while(1);
}
// end of main
//function to push an item
void push (int data)
   {
     if (sp==size-1)
     {
         printf("stack full \n");
         return;
     }
     else
     stack[++sp]=data;//sp=sp+1
     return;
   }
//function to pop an item
  int pop()
  {
   if (sp==-1)
   {
      printf("Empty stack\n");
      exit(1);
   }
   else
        return stack[sp];
  }
//display stack 
void display()
  {
  int i;
  for(i=0;i<=sp;i++)
  printf("%d,",stack[i]);
  return;
  }
