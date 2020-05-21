/*
input and output:
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit
5   
enter the value for array one
6 1 9 5 4
enter the value for array two
3 4 8 2 4
Sum:80

program:
*/
# include<stdio.h>
void main()
{
	int arr1[100],arr2[100],lim,result=0;
	printf("enter the limit\n");
	scanf("%d",&lim);
	printf("enter the value for array one\n");
	for(int i=0;i<lim;i++)
		scanf("%d",&arr1[i]);
	printf("enter the value for array two\n");
	for(int i=0;i<lim;i++)
		scanf("%d",&arr2[i]);
	//sort ascending order
	for(int i=0;i<lim;i++)
	{
		for(int j=0;j<lim;j++)
		{
			if(arr1[i] > arr1[j])
			{
				int temp;
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}
	}
	//sort descending order
	for(int i=0;i<lim;i++)
	{
		for(int j=0;j<lim;j++)
		{
			if(arr2[i] < arr2[j])
			{
				int temp;
				temp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = temp;
			}
		}
	}
	//perform add and multiply
	for(int i=0;i<lim;i++)
	{
		result += (arr1[i] * arr2[i]);
	}
	printf("Sum:%d\n",result);
}
