/*
queue operation:
insertion
deletion
traverse
program:
*/
# include<stdio.h>
# include<stdlib.h>
# define size 10
int queue[size],front=0,rear=0;
void insert()
{
	int elem;
	printf("enter the element\n");
	scanf("%d",&elem);
	if(rear == size)
	{
		printf("queue is full\n");
	}
	else
	{
		queue[rear++]=elem;
		printf("%d inserted\n",elem);
	}
}
void delete()
{
	if(rear == front)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("%d deleted\n",queue[front]);
		for(int i=0;i<rear-1;i++)
			queue[i]=queue[i+1];
		rear--;
	}
}
void traverse()
{
	if(front == rear)
	{
		printf("queue is empty\n");
	}	
	else
	{	
		printf("elements in the queue\n");
		for(int i=front;i<rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}
void main()
{
	int select;
	while(1)
	{
		printf(" press 1 for insertion \n press 2 for deletion \n press 3 for traverse \n press 4 for exit\n");
		scanf("%d",&select);
		switch(select)
		{
			case 1:insert();
					break;
			case 2:delete();
					break;
			case 3:traverse();
					break;
			case 4: exit(0);
		}

	}
}
