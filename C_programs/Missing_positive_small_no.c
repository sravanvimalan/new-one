/*
You are given an array of integers. Return the smallest positive integer that is not present in the array. The array may contain duplicate entries.

For example, the input [3, 4, -1, 1] should return 2 because it is the smallest positive integer that doesn't exist in the array.

input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc Missing_positive_small_no.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
Array elements:[3,4,-1,1]
Missing smallest positive integer: 2
program:
*/
# include<stdio.h>
int arr[4]={3, 4, -1, 1};
int max,small;
void print()
{
	printf("Array elements:");
	printf("[");
	for(int i=0;i<3;i++)
	{
		printf("%d,",arr[i]);
	}
	printf("%d]\n",arr[3]);
}
void findmax()
{
    max=arr[0];
	for(int i=0;i<5;i++)
	{
		if(max < arr[i])
			max = arr[i];
			
	}
}
void changetopositive()
{
	for(int i=0;i<5;i++)
	{
		if(arr[i]<1)
		{
			arr[i]=max;
		}
	}
}
void checkincrement(int small)
{
	for(int i=0;i<5;i++)
	{
		if(small == arr[i])
		{
			small+=1;
			checkincrement(small);
		}
	}
	printf("Missing smallest positive integer: %d\n",small);
}
void checkdecrement(int small)
{
	for(int i=0;i<5;i++)
	{
		if(small == arr[i])
		{
			small-=1;
			checkdecrement(small);
		}
	}
	printf("Missing smallest positive integer: %d\n",small);
}
void findsmallest()
{
	 small=arr[0];
	for(int i =0;i<5;i++)
	{
		if(small > arr[i])
			small = arr[i];
	}
	if(small == 1)
	{
		small+=1;
		checkincrement(small);
		return;
	}
	if(small > 1)
	{
		small-=1;
		checkdecrement(small);
		return;
	}
}

int main()
{
	print();
	findmax();
	changetopositive();
	findsmallest();
	return 0;
}
