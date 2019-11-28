/*
sravan@sravan-DL-IPMSB-H61:~$ gcc Rearrange_Array_Alternately.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
Enter the number of elements: 5
Enter the elements: 5 3 1 2 4
Rearrange array: 5 1 4 2 3 
program:
*/
# include<stdio.h>
# include<stdlib.h>
void sort(int *ptr,int lim)
{
	for(int i=0;i<lim;i++)
	{
		int small=ptr[i];
		for(int j=0;j<lim;j++)
		{
			if(small>ptr[j])
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
	printf("Rearrange array: ");
	for(int i=0;i<lim;i++)
		printf("%d ",ptr[i]);
	printf("\n");
}
void copy(int *ptr1,int *ptr,int lim)
{
	int s=0,l=lim-1;
	for(int i=0;i<lim;i++)
	{
		if(i%2 == 0)
		{
			ptr1[i]=ptr[s];
			s++;
		}
		else
		{
			ptr1[i]=ptr[l];
			l--;
		}
	}
}
int main(void)
{
	int *ptr,*ptr1,no_of_element;
	printf("Enter the number of elements: ");
	scanf("%d",&no_of_element);
	ptr=(int *)malloc(no_of_element*sizeof(int));
	ptr1=(int *)malloc(no_of_element*sizeof(int));
	printf("Enter the elements: ");
	for(int i=0;i<no_of_element;i++)
		scanf("%d",&ptr[i]);
	sort(ptr,no_of_element);
	//rearrange(ptr,no_of_element);
	copy(ptr1,ptr,no_of_element);
	print(ptr1,no_of_element);
	return 0;
}
