#include <stdio.h>
#include <stdlib.h>
int i,a[200],front=-1,cap=200,rear=-1;
void enqueue(int x)
{
	if(rear<cap)
	{
		a[++rear]=x;
		printf("Element entered successfully\n\n");
		if(front==-1)
		front++;
	}
	else
	printf("Queue is Full\n\n");
}
int dequeue()
{
	if(front>rear)
	{printf("Queue is empty\n\n");
	return(-909);front=-1;rear=-1;}
	else
	return(a[front++]);
	
}
void display()
{
	if(front>rear)
	printf("Queue is empty");
	else
	{
		printf("\n\nThe Elements of the queue are as follows....\n");
		for(i=front;i<=rear;i++)
		printf("%d\n",a[i]);
	}
	printf("\n\n");
}
