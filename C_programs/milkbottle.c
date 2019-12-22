/*
question:A milkman serves milk in packaged bottles of varied sizes.Write a program to help him to supply desire quantity using the minimum number of bottles as possible. 
The bottle sizes and the demand for milk will be given as input.
example:
sravan@sravan-DL-IPMSB-H61:~$ gcc milkbottle.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the quantity of milk do u have?
17
enter the no of bottles do u have?
4   
enter the sizes of milk bottles
12 5 7 10
 pairs (7,10)
 pairs (12,5)
 program:
*/
# include<stdio.h>
# include<string.h>
# define size 10
int stack[size],top=-1;
void push(int a)
{
	stack[++top]=a;
}
void print()
{
	int j=1;
	for(int i=top;i>=0;i=i-2)
	{
		if(j%2 == 1)
			{
				printf(" pairs (%d,%d)\n",stack[i],stack[i-1]);
			}
			j++;
	}
}
int main()
{
	int milkquantity,bottlesize[size],no,k=0;
	printf("enter the quantity of milk do u have?\n");
	scanf("%d",&milkquantity);
	printf("enter the no of bottles do u have?\n");
	scanf("%d",&no);
	printf("enter the sizes of milk bottles\n");
	for(int i=0;i<no;i++)
		scanf("%d",&bottlesize[i]);
	for(int i=0;i<no;i++)
	{
		int sum=bottlesize[i];
		for(int j=0;j<no;j++)
		{
			if(i != j)
			{
				sum+=bottlesize[j];
				if(sum == milkquantity)
				{
					push(bottlesize[i]);
					push(bottlesize[j]);
				}
					sum=bottlesize[i];
			}
		}
	}
	print();
}
