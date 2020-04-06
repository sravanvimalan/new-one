/*
Hi, here's your problem today. This problem was recently asked by Apple:

Implement a queue class using two stacks. A queue is a data structure that supports the FIFO protocol (First in = first out).
Your class should support the enqueue and dequeue methods like a standard queue.

imput and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc queue_using_two_stacks.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out

20->30

program:

*/
# include<stdio.h>
int stack1[100],stack2[100],top1=-1,top2=-1;
void push(int n)
{
	stack1[++top1]=n;
}
void pop()
{
	if(top1 == -1)
		return;
	else
	{
		while(top1 != -1)
		{
			stack2[++top2]=stack1[top1--];
		}
		
		top2--; // pop the element
		while(top2 != -1)
			push(stack2[top2--]);
	}
}
void enqueue(int n)
{
	push(n);
}
void dequeue()
{
	pop();
}
void print()
{
	if(top1 == -1)
		printf("Queue is empty\n");
	else
	{
		while(top1 != -1)
		{
			stack2[++top2]=stack1[top1--];
		}
	}
	while(top2 != 0)
	{
		printf("%d->",stack2[top2--]);
	}
	printf("%d\n",stack2[top2--]);
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	dequeue();
	print();
	return 0;
}
