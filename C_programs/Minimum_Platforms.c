/*
question:https://practice.geeksforgeeks.org/problems/minimum-platforms/0
input:
sravan@sravan-DL-IPMSB-H61:~$ gcc trainschedule.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the number of trains
3
arrival time of train 1
0900
departure time of train 1
1000
arrival time of train 2
1100
departure time of train 2
1200
arrival time of train 3
1235
departure time of train 3
1240
output:
no of platform 1
program:
*/
# include<stdio.h>
# define size 10
int main()
{
	int departure[size],arrival[size],n=0,i=0,platformcount=0,temp[size];
	printf("enter the number of trains\n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("arrival time of train %d\n",i+1);
		scanf("%d",&arrival[i]);
		printf("departure time of train %d\n",i+1);
		scanf("%d",&departure[i]);
		i++;
	}
	temp[0]=departure[0];
	for(int i=0;i<n;i++)
	{
		int temp1=arrival[i+1];
		for(int j=0;j<i+1;j++)
		{
			if(temp[j] == temp1)
			{
				temp[++i]=departure[j];
				platformcount++;
			}
			if(temp[j]>temp1)
			{
				temp[++i]=departure[j];
				platformcount++;
			}

		}
	}
	printf("no of platform %d\n",platformcount/2 );

}
