/*
Reverse Linked List
input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc reverse_linkedlist.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
10->20->30->40->50
Reverse the linkedlist shown below via iteration method
50->30->40->20->10
program:
*/
# include<stdio.h>
# include<stdlib.h>
struct node* root=NULL;
struct node
{
	int data;
	struct node* link;
};
void append(int n)
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->link=NULL;
	if(root == NULL)
	{
		root=temp;
	}
	else
	{
		struct node* ptr;
		ptr=root;
		while(ptr->link != NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=temp;
	}

}
void print()
{
	
	if(root == NULL)
	{
		printf("Empty list\n");
	}
	else
	{
		struct node* ptr;
		ptr=root;
		while(ptr->link!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->link;
		}
		printf("%d\n",ptr->data);
	}
}
int length()
{
	int len=0;
	if(root == NULL)
	{
		return 0;
	}
	struct node* ptr;
	ptr = root;
	while(ptr->link!=NULL)
	{
		len++;
		ptr=ptr->link;
	}
	return len;
}
void reverse()
{
	struct node* ptr1;
	struct node* ptr2;
	int *ptr=NULL;
	int *temp;
	ptr1=root,ptr2=root;
	int len=length();
	for(int i=0;i<len/2;i++)
	{
		while((int *)ptr2->link!=(int *)ptr)
		{
			ptr2=ptr2->link;
			temp=(int *)ptr2;
		}
		ptr=temp;
		int temp;
		temp=ptr1->data;
		ptr1->data=ptr2->data;
		ptr2->data=temp;
		ptr1=ptr1->link;
		ptr2=root;
	}
}
int main()
{
	append(10);
	append(20);
	append(30);
	append(40);
	append(50);
	print();
	printf("Reverse the linkedlist shown below via iteration method\n");
	reverse();
	print();
}

