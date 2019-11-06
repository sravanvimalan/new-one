/*
question:https://practice.geeksforgeeks.org/problems/next-larger-element/0
sravan@sravan-DL-IPMSB-H61:~$ gcc nextgreater.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit
4
enter the elements
1 3 2 4
3 4 4 -1 
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit
4
enter the elements
4 3 2 1
-1 -1 -1 -1 
program:
*/
# include<stdio.h>
# include<string.h>
# define size 10
int stack[size],top=-1;
void push(int n)
{
	stack[++top]=n;
}
int main()
{
	int len,temp[size],flag=0;
	printf("enter the limit\n");
	scanf("%d",&len);
	printf("enter the elements\n");
	for(int i=0;i<len;i++)
		scanf("%d",&temp[i]);
	for(int i=0;i<=len;i++)
	{
		flag=0;
		int small=temp[i];
		for(int j=i+1;j<len;j++)
		{
			if(small<temp[j])
			{
				push(temp[j]);
				flag=1;
				break;
			}
		}
		if(flag==0)
			push(-1);
	}
	for(int i=0;i<top;i++)
		printf("%d ",stack[i]);
	printf("\n");
}
