/*
Hi, here's your problem today. This problem was recently asked by Facebook:

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
*You must do this in-place without making a copy of the array.
*Minimize the total number of operations.
input and output:

sravan@sravan-DL-IPMSB-H61:~$ gcc move_all_zeros.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit
5
0 1 0 3 12
move all 0's to the end:
[1,3,12,0,0]

sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit
10
0 0 0 2 0 1 3 4 0 0
move all 0's to the end:
[2,1,3,4,0,0,0,0,0,0]

program:
*/
# include<stdio.h>
int main()
{
	int arr[100],index=0,lim,i;
	printf("enter the limit\n");
	scanf("%d",&lim);
	//read elements
	for(int i=0;i<lim;i++)
	{
		scanf("%d",&arr[i]);
	}
	//find first zero in array
	for(int i=0;i<lim;i++)
		{
			if(arr[i]==0)
			{
				index=i;
				break;
			}
		}
	//shifting 
	for(int i=index;i<lim;i++)
	{
		if(arr[i] > 0)
			{
				arr[index]=arr[i];
				arr[i]=0;
				index++;
			}
	}
	//print
	printf("move all 0's to the end:\n");
	printf("[");
    for(i=0;i<lim-1;i++)
	{
		printf("%d,",arr[i]);
	}
	printf("%d",arr[i]);
	printf("]\n");
}
