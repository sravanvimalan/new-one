/*
aim: circular queue
input and ouput:
sravan@sravan-DL-IPMSB-H61:~$ gcc circularqueue.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
10
10 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
20
20 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
30
30 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>3
elements in the queue
10
20
30
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
0
0 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
50
50 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
60
60 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
70
70 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>3
elements in the queue
10
20
30
0
50
60
70
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
20
20 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
30
30 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
20
20 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>1
enter the element
20
queue is full
20 inserted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
10 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
20 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
30 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
0 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
50 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
60 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
70 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
20 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
30 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
20 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
queue is empty
20 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
queue is empty
20 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
queue is empty
20 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>2
queue is empty
20 deleted
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>3
queue is empty
 select the operation
 press 1 for insertion
 press 2 for deletion 
 press 3 for traverse 
 press 4 for exit
 =>4
program:
*/
# include<stdio.h>
# include<stdlib.h>
# define size 10
int queue[size],front=-1,rear=-1,elem;
void insert()
{
	int n;
	printf("enter the element\n");
	scanf("%d",&n);
	if(rear == size-1 || front == rear+1)
	{
		printf("queue is full\n");

	}
	else if(rear == -1 && front==-1)
	{
			front=rear=0;
			queue[rear]=n;
	}
	else if(rear == size-1)
	{
		rear=0;
		queue[rear]=n;
	}
	else
	{
		queue[++rear]=n;
	}
	printf("%d inserted\n",n);
}
void delete()
{
	if(front==-1 && rear==-1)
	{
		printf("queue is empty\n");
	}
	else if(front == rear)
	{
		elem=queue[front];
		front=rear=-1;
	}
	else if(front == size-1)
	{
		elem=queue[front];
		front=0;
	}
	else
	{
		elem=queue[front];
		front++;
	}
	printf("%d deleted\n",elem);
}
void traverse()
{
	if(front == rear)
	{
		printf("queue is empty\n");

	}
	else if(front<rear)
	{
		printf("elements in the queue\n");
		for(int i=front;i<=rear;i++)
			printf("%d\n",queue[i]);
	}
	else
	{
		for(int i=front;i<size;i++)
			printf("%d\n",queue[i]);
		for(int i=0;i<=rear;i++)
			printf("%d\n",queue[i]);
	}
}
void main()
{
	while(1){
		int op;
		printf(" select the operation\n");
		printf(" press 1 for insertion\n press 2 for deletion \n press 3 for traverse \n press 4 for exit\n ");
		printf("=>");
		scanf("%d",&op);
		switch(op)
		{
			case 1:insert();
					break;
			case 2:delete();
					break;
			case 3:traverse();
					break;
			case 4:exit(0);
					break;
			default:printf("invalid number!!!\n");
		}
	}
}
