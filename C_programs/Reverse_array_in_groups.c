/*
input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc rev_arr_in_grps.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the total number of elements
5
enter the numbers
1 2 3 4 5
enter the range u want to cut and reverse them
3
3 2 1 5 4
program:
*/
# include<stdio.h>
# include<stdlib.h>
int arr_size,*arr_ptr,cut;
void cutnrev(int arr_size,int cut)
{
	int lim,exeception,n=0,temp;
	lim=arr_size/3;
	exeception = arr_size%3;
	for(int i=0;i<lim;i++)
	{
		temp = arr_ptr[n];
		arr_ptr[n] = arr_ptr[n+2];
		arr_ptr[n+2]=temp;
		n=n+3;
	}
	if(exeception == 2)
	{
		temp = arr_ptr[arr_size-2];
		arr_ptr[arr_size-2]=arr_ptr[arr_size-1];
		arr_ptr[arr_size-1]=temp;
	}
}
void print()
{
	for(int i =0; i<arr_size; i++)
		printf("%d ",arr_ptr[i]);
    printf("\n");
}
int main(void)
{
	printf("enter the total number of elements\n");
	scanf("%d",&arr_size);
	arr_ptr =(int *)malloc(arr_size*sizeof(int));
	printf("enter the numbers\n");
	for(int i=0; i<arr_size; i++)
		scanf("%d",&arr_ptr[i]);
	printf("enter the range u want to cut and reverse them\n");	
	scanf("%d",&cut);
	cutnrev(arr_size,cut);
	print();
}
