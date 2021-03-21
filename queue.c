#include <stdio.h>
#define SIZE 10
void enQueue(int);
void deQueue();
void display();
void exit();
int queue[SIZE],front=-1,rear=-1;
int main()
{
	int value,choice;
	while(1)
	{
		printf("\n\n*****MENU*****\n");
		printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit");
		printf("\n enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter value to be inserted:");
			scanf("%d",&value);
			enQueue(value);
			break;
			case 2: deQueue();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			break;
			default:
			printf("\n wrong selection");
		}
	}
	return 0;
}
void enQueue(int value)
{
	if(rear==SIZE-1)
	printf("\n Queue is full!!!Insertion not possible!!!");
	else
	{
		if(front==-1)
		front=0;
		rear++;
		queue[rear]=value;
		printf("\n Insertion success!!!");
	}
}
void deQueue()
{
	if(front==-1)
	printf("\n Queue is empty!!!Deletion not possible!!!");
	else
	{
		printf("\n Deleted:%d",queue[front]);
		front++;
		if(front>rear)
		front=rear=-1;
	}
}
void display()
{
	if(rear==-1)
	printf("\n Queue is empty!!!");
	else
	{
		int i;
		printf("\n Queue elements are:\n");
		for(i=front;i<=rear;i++)
		printf("%d\t",queue[i]);
	}
}
	
