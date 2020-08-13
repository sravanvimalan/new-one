/*
input and output:
sravan@sravan-DL-IPMSB-H61:~/Desktop$ gcc Long_increasing_sub_seq.c
sravan@sravan-DL-IPMSB-H61:~/Desktop$ ./a.out
Enter the limit: 
8
10 22 9 33 21 50 41 50 41 60
Longest increasing subsequence length:5

program:
*/
//Longest increasing subsequence
// here i am dynamic progamming approach (because here i found overlapping substructure property).
# include<stdio.h>
# include<stdlib.h>
void find_long_sub_seq(int *ptr1,int *ptr2,int lim)
{
	//single elements are considered as subsequence having length one.
	for(int i=0;i<lim;i++)
	{
		ptr2[i]=1;
	}
	for(int i=1;i<lim;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(ptr1[j] < ptr1[i])
			{
				if(ptr2[i] > ptr2[j])
				{
					continue;
				} 
				else
				{
					ptr2[i]=ptr2[j]+1;
				}
			}

		}
	}
	int len=ptr2[0];       //find max len
	for(int i=1;i<lim;i++)
	{
		if(len < ptr2[i])
			len=ptr2[i];
	}
	printf("Longest increasing subsequence length:%d\n",len);
	return;
}
int main()
{
	int lim=0;
	int *ptr1,*ptr2;
	printf("Enter the limit: \n");
	scanf("%d",&lim);
	ptr1=(int *)malloc(lim * sizeof(int));
	for(int i=0;i<lim;i++)
	{
		scanf("%d", &ptr1[i]);
	}
	ptr2=(int *)malloc(lim * sizeof(int));
	find_long_sub_seq(ptr1,ptr2,lim);
	return 0;
}
