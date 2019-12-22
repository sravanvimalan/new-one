/*
linked list basic operations:
program:
*/
# include<stdio.h>
# include<stdlib.h>
struct node* root=NULL;
int len=0;
int length();
struct node
{
	int data;
	struct node* link;		
};
void addafter(int pos,int n)
{
	struct node* ptr;
	ptr=root;
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	int lim=length(),i=1;
	if(lim+1<pos)
	{
		printf("linked list is not must longer\n");
	}
	else if(pos==1)
	{
		while(i<pos)
		{
			ptr=ptr->link;
			i++;
		}
		temp->link=root;
		root=temp;
	}
	else
	{
		while(i<pos-1)
		{
			ptr=ptr->link;
			i++;
		}
		temp->link=ptr->link;
		ptr->link=temp;

	}
}
void append(int n)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->link=NULL;
	if(root == NULL)
		root=temp;
	else
	{
		struct node* p;
		p=root;
		while(p->link != NULL)
		{
			p=p->link;
		}
		p->link = temp;
	}
}
void traverse()
{
	if(root == NULL)
		printf("linked list is empty\n");
	while(root->link!=NULL)
	{
		printf("%d->",root->data);
		root=root->link;
	}
	printf("%d",root->data );
	printf("\n");
}
int length()
{
	struct node* ptr;
	ptr=root;
	for(int i=0;ptr->link != NULL;i++)
	{
		len++;
		ptr=ptr->link;
	}
	return len;

}
void delete()
{
	int lim=length(),i=1;
	struct node *ptr;
	ptr=root;
	while(i<lim-1	)
	{
		ptr=ptr->link;
	}
	ptr->link=NULL;
}
int main()
{
	append(10);
	append(20);
	append(30);
	addafter(3,40);
	delete();
	traverse();
	}
