#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int info;
	struct node *next;
}*top=NULL;
void main()
{
	int ch;
	clrscr();
	while(1)
	{
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display");
		printf("\n4.Quit");
		printf("\nEnter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("\n Wrong choice Try again");
		}
	}
}
push()
{
	struct node *temp;
	int item;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n Enter item to be inserted on the stack= ");
	scanf("%d",&item);
	temp->info=item;
	temp->next=top;
	top=temp;
}
pop()
{
	struct node *temp;
	if(top==NULL)
		printf("\n Stack underflow");
	else
	{
		temp=top;
		printf("\n Deleted item from stack is=%d",temp->info);
		top=top->next;
		free(temp);
	}
}
display()
{
	struct node *trav;
	if(top==NULL)
		printf("\n Stack is empty\n");
	else
	{
		printf("\ncontents of stack=\n");
		for(trav=top;trav!=NULL;trav=trav->next)
		{
			printf("%d\n",trav->info);
		}
	}
}