/*
Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: You are not suppose to use the library’s sort function for this problem.

*Can you do this in a single pass?!!!

Example:
Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

input and output:

sravan@sravan-DL-IPMSB-H61:~$ gcc Sort_Colors.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit
5
Enter the elements
1 0 2 1 0
Given_color_order:[1,0,2,1,0]
ordered_color:[0,0,1,1,2]

sravan@sravan-DL-IPMSB-H61:~$ ./a.out

enter the limit
10
Enter the elements
1 0 2 0 1 2 0 1 2 0
Given_color_order:[1,0,2,0,1,2,0,1,2,0]
ordered_color:[0,0,0,0,1,1,1,2,2,2]

program:
*/
# include<stdio.h>
int main()
{
	int lim=6,first=0,last,given_color[100],ordered_color[100]={0};
	//read
	printf("enter the limit\n");
	scanf("%d",&lim);
	last = lim-1;
	printf("Enter the elements\n");
	for(int i=0;i<lim;i++)
	{
		scanf("%d",&given_color[i]);
	}
	//sort
	for(int i=0;i<lim;i++)
	{
		if(ordered_color[i] != 2)
		{
		    ordered_color[i]=1;
		}
		if(given_color[i] == 2)
		{
			ordered_color[last]=2;
			last--;
		}
		if(given_color[i] == 0)
		{
			ordered_color[first]=0;
			first++;
		}
	}
	//print
	printf("Given_color_order:[%d",given_color[0]);
	for(int i=1;i<lim;i++)
	{
		printf(",%d",given_color[i]);
	}
	printf("]\n");
	printf("ordered_color:[%d",ordered_color[0]);
	for(int i=1;i<lim;i++)
	{
		printf(",%d",ordered_color[i]);
	}
	printf("]\n");
	return 0;
}
