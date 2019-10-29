/*
    Question:https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
  
input:
sravan@sravan-DL-IPMSB-H61:~$ gcc Sort_an_array_of_0s,_1s_and_2s.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit: 5
enter the elements:0 2 1 2 0
output:
Sorted array:0 0 1 2 2 
program:
*/
# include<stdio.h>
# include<stdlib.h>
void sort(int *ptr,int lim)
{
	
	for(int i=0;i<lim;i++)
	{
		for(int j=0;j<lim;j++)
		{	
			if(ptr[i]<ptr[j])
				{
					int temp;
					temp=ptr[i];
					ptr[i]=ptr[j];
					ptr[j]=temp;

				}
		}
	}
}
void print(int *ptr,int lim)
{
	printf("Sorted array:");
	for(int i=0;i<lim;i++)
		printf("%d ",ptr[i]);
	printf("\n");
}
int main(void)
{
	int *ptr,lim;
	printf("enter the limit: ");
	scanf("%d",&lim);
	ptr=(int *)malloc(lim*sizeof(int));
	printf("enter the elements:");
	for(int i=0;i<lim;i++)
	scanf("%d",&ptr[i]);
	sort(ptr,lim);
	print(ptr,lim);
}
