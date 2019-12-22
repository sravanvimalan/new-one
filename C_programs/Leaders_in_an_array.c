/*
question:https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0
intput:
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit
5
enter the number
1 2 3 4 0
output:
The leaders are:
4 0 
program:
*/
# include<stdio.h>
# define size 10
int top=-1,stack[size];
void push(int n)
{
	stack[++top]=n;
}
int main(void)
{
	int lim,arr[size],flag=0;
	printf("enter the limit\n");
	scanf("%d",&lim);
	printf("enter the number\n");
	for(int i=0;i<lim;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<lim;i++)
	{
		flag=0;
		for(int j=i+1;j<lim;j++)
		{
			if(arr[i]<arr[j])
				flag=1;
		}
		if(flag == 0)
			push(arr[i]);
	}
	printf("The leaders are:\n");
	for(int i=0;i<=top;i++)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
}
