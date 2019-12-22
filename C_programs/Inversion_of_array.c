/*
Inversion of array
question link:https://practice.geeksforgeeks.org/problems/inversion-of-array/0/
intput:
sravan@sravan-DL-IPMSB-H61:~$ gcc Inversion_of_array.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit: 5
enter the elements: 2 4 1 3 5
output:
The total no of pair: 3
program:
*/
# include<stdio.h>
# include<stdlib.h>
int count(int *ptr,int lim)
{
	int n,count=0;
	for(int i=0;i<lim;i++)
	{
		n=ptr[i];
		for(int j=i+1;j<lim;j++)
		{
			if(ptr[i]>ptr[j])
				count++;
		}
	}
	return count;
}
int main(void)
{
	int *ptr,lim,result;
	printf("enter the limit: ");
	scanf("%d",&lim);
	ptr=(int *)malloc(lim*sizeof(int));
	printf("enter the elements: ");
	for(int i=0;i<lim;i++)
		scanf("%d",&ptr[i]);
	result=count(ptr,lim);
	printf("The total no of pair: %d\n",result);
	return 0;
}
