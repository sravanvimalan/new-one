/*
question:https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
input:
sravan@sravan-DL-IPMSB-H61:~$ gcc midlink.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
1.insert 2.exit
1
enter element
2
1.insert 2.exit
1
enter element
3
1.insert 2.exit
1
enter element
4
1.insert 2.exit
1
enter element
5
1.insert 2.exit
2
linked list:
2->3->4->5
output:
Mid element 4   ('0' based index)
program:
*/
# include<stdio.h>
# include<stdlib.h>
struct node* root=NULL;
int n,count=0;
struct node{
	int data;
	struct node* link;
};
void insert(int n)
{
   struct node* temp;
   temp=(struct node*)malloc(sizeof(struct node));
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
	struct node* ptr;
	ptr=root;
	printf("linked list:\n");
	if(root == NULL)
	{
		printf("empty list\n");
	}
	else
	{	
		while(ptr->link != NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->link;
		}
		printf("%d\n",ptr->data);
	}
}
void findmid(int n)
{
	int i=0;
	struct node* ptr;
	ptr=root;
	if(ptr != NULL)
	{
		while(i<n)
		{
			ptr=ptr->link;
			i++;
		}
	printf("Mid element %d\n",ptr->data);
	}
}
void main()
{
	int k=1;
	while(1)
	{
		printf("1.insert 2.exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("enter element\n");
			        scanf("%d",&n);
					insert(n);
					count++;
					break;
			case 2:	k=0;
					goto label;
					break;
			default:printf("invalid!!!\n");
		}
		if(k==0)
		label: break;
	}
	print();
	findmid(count/2);
}
