/*
input and output:
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
most_repeative elements :2 

program:

*/
# include<stdio.h>
int givenele[100]={1 ,2, 2 ,5},distinct_ele_count[100]={0},len_count_arr=0,k=0,count=0,n=4,most_repeative_ele=0;
int check(int ele)
{
	for(int i=0;i<k;i+=2)
	{
		if(ele == distinct_ele_count[i])
		{
			return 0;
		}
	}
	return 1;
}
void findcount()
{
	for(int i=0;i<n;i++)
	{
		if(check(givenele[i]))
		{
			distinct_ele_count[k++]=givenele[i];
			count = 1;
			for(int j=i+1;j<n;j++)
			{
				if(givenele[i] == givenele[j])
				{
					count++;
				}
			}
			distinct_ele_count[k++]=count;
			count=0;
		}	
	}	
}
void most_repeative()
{
	most_repeative_ele=distinct_ele_count[1];
	for(int i=1;i<k;i+=2)
	{
		if(most_repeative_ele < distinct_ele_count[i])
			most_repeative_ele=distinct_ele_count[i];
	}
}

void print()
{
	printf("most_repeative elements :");
	for(int i=1;i<k;i+=2)
	{
		if(most_repeative_ele == distinct_ele_count[i])
		{
			printf("%d ",distinct_ele_count[i-1]);
		}
	}
	printf("\n");
}
int main()
{
	findcount();
	most_repeative();
	print();
	return 0;
}
