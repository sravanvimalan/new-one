/*
NUMBER OF PAIRS
question:https://practice.geeksforgeeks.org/problems/number-of-pairs/0/
condition:X^y>Y^x
input:
sravan@sravan-DL-IPMSB-H61:~$ gcc Number_of_pairs.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit: 3
enter the no: 3 5 4
output:
count: 3
program:
*/
# include<stdio.h>
# include<stdlib.h>
int power(int n,int e)
{
	int i=1;
	while(i<e)
	{
		n=n*n;
		i++;
	}
	return n;
}
int counts(int *ptr,int lim)
{
	int count=0;
	for(int i=0;i<lim;i++)
	{
		for(int j=0;j<lim;j++)
		{
			if(i!=j)
			{
				if(power(ptr[i],ptr[j])>power(ptr[j],ptr[i]))
				{
					count++;
				}
			}
		}
	}
	return count;
}
int main(void)
{
	int lim,*ptr,no;
	printf("enter the limit: ");
	scanf("%d",&lim);
	printf("enter the no: ");
	ptr=(int *)malloc(lim*sizeof(int));
	for(int i=0;i<lim;i++)
		scanf("%d",&ptr[i]);
	no=counts(ptr,lim);
	printf("count: %d\n",no);
	return 0;
}
