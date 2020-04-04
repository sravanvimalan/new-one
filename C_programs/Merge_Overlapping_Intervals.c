/*
Hi, here's your problem today. This problem was recently asked by Microsoft:

You are given an array of intervals - that is, an array of tuples (start, end). The array may not be sorted, and could contain overlapping intervals. Return another array where the overlapping intervals are merged.

For example:
[(1, 3), (5, 8), (4, 10), (20, 25)]

This input should return [(1, 3), (4, 10), (20, 25)] since (5, 8) and (4, 10) can be merged into (4, 10).

input and output:

sravan@sravan-DL-IPMSB-H61:~$ gcc Merge_Overlapping_Intervals.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out

Given input:
[(1,3),(5,8),(4,10),(20,25)]
Sorted based on first element in a pair:
[(1,3),(4,10),(5,8),(20,25)]
Merge_Overlapping_Intervals:
[(1,3),(4,10),(20,25)]

program:
*/
# include<stdio.h>
int main()
{
	int arr[10][2]={{1, 3}, {5, 8}, {4, 10}, {20, 25}},i,j;
	printf("Given input:\n");
	printf("[");
	for(i=0;i<3;i++)
	{
		printf("(");
		for(j=0;j<2;j++)
		{
			
			printf("%d",arr[i][j] );
			if(j==0)
				printf(",");
		}
		printf("),");
	}
	printf("(%d,%d)",arr[3][0],arr[3][1]);
	printf("]\n");
	//sort
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[j][0] > arr[i][0])
			{
				int temp;

				temp=arr[i][0];
				arr[i][0]=arr[j][0];
				arr[j][0]=temp;

				temp=arr[i][1];
				arr[i][1]=arr[j][1];
				arr[j][1]=temp;
			}
		}
	}
	//print
	printf("Sorted based on first element in a pair:\n");
	printf("[");
	for(i=0;i<3;i++)
	{
		printf("(");
		for(j=0;j<2;j++)
		{
			
			printf("%d",arr[i][j] );
			if(j==0)
				printf(",");
		}
		printf("),");
	}
	//print based on overlapping intervals
	printf("(%d,%d)",arr[3][0],arr[3][1]);
	printf("]\n");
	printf("Merge_Overlapping_Intervals:\n"); 
	printf("["); 
	printf("(%d,%d)",arr[0][0],arr[0][1]);        
	for(i=0;i<4;i++)
	{
       if(arr[i][1] < arr[i+1][0])
       {
       		printf(",(%d,%d)",arr[i+1][0],arr[i+1][1]);	
       }
	}
	printf("]\n");
}
