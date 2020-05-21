/*
					Longest increasing sub sequence
input and ouput:
sravan@sravan-DL-IPMSB-H61:~$ gcc long_sub_sequn.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the lim
8
enter the numbers
10 9 2 5 3 7 101 18
count:4
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the lim
6
enter the numbers
100 101 2 3 105 110
count:4
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the lim
5
enter the numbers
3 5 7 2 1
count:3

program:
*/
# include<stdio.h>
int main()
{
	int lim,arr[100],count=0,ele;
	printf("enter the lim\n");
	scanf("%d",&lim);
	printf("enter the numbers\n");
	for(int i=0;i<lim;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<lim;i++)
	{
		if(arr[i] < arr[i+1] && count==0)
		{
			count=1;
			ele = arr[i];
		}
		if(count)
		{
			if(ele  < arr[i])
			{
				ele = arr[i];
				count++;
			}
		}
	}
	printf("count:%d\n",count );

}
