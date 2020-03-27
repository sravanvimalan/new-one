/*
compile and execute:
sravan@sravan-DL-IPMSB-H61:~$ gcc double_linkedlist.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
1231241->111->10->20->30
program:
*/
# include<stdio.h>
# include<stdlib.h>
struct node* head=NULL;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
void insert(int n)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->data=n;
	temp->right=NULL;
	if(head == NULL)
	{
		head=temp;
	}
	else
	{
		struct node* ptr;
		ptr=head;
		while(ptr->right != NULL)
		{
			ptr=ptr->right;
		}
		ptr->right=temp;
		temp->left=ptr;
	}
}
void insertatbegin(int n)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->right=NULL;
	temp->left=NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->right=head;	
		head=temp;
	}
}
void print()
{
	if(head == NULL)
	{
		printf("NO elements\n");
	}
	else
	{
		struct node* ptr;
		ptr=head;
		while(ptr->right != NULL)
		{
			printf("%d->",ptr->data );
			ptr=ptr->right;
		}
		printf("%d\n",ptr->data );
	}
}
void main()
{
 insert(10);
 insert(20);
 insert(30);
 insertatbegin(111);
 insertatbegin(1231241);
 print();
}
