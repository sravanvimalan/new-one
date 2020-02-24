/*
Ques:print the longest subarray based on target sum time complexity O(n) 
hint:use sliding window approach!
input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc Long_sub_array.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
start_index:1
end_index:4
*/
//using sliding window approach!!!
# include<stdio.h>
void main()
{
	int start=0,end=0,diff,target_sum=4,get_sum=0,start_index,end_index;
	int arr[9]={1,1,0,1,2,3,4,5,6};
	for(int i=0;i<9;i++)
	{
		get_sum=get_sum+arr[i];
		if(get_sum>target_sum)
		{
			get_sum=get_sum-arr[start];
			start++; 
		}
		if(get_sum==target_sum)
		{
			if((end_index-start_index)<(end-start))
			{
				start_index=start;
				end_index=end;
			}
		}
		end++;
	}
	printf("start_index:%d\nend_index:%d\n",start_index,end_index);
}
