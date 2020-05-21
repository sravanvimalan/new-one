/*
input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc first_non_repeat_no.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit
5
1 2 2 3 4
Non repeat first element:1

sravan@sravan-DL-IPMSB-H61:~$ gcc first_non_repeat_no.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit
5
2 2 3 3 3
Non repeat elements is not found

program:

*/
# include<stdio.h>
int main()
{
	int arr[100],lim,flag=0,index;
	printf("enter the limit\n");
	scanf("%d",&lim);
	for(int i=0;i<lim;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<lim;i++)
	{
		for(int j=0;j<lim;j++)
		{
			if(arr[i] == arr[j])
			{
				flag = 0;
				break;
			}
			else
			{
				flag =1;
				index = i;
			}

		}
		if(flag)
		{
			printf("Non repeat first element:%d\n",arr[index]);
			break;
		}
	}
	printf("Non repeat elements is not found\n");
}
