/*
input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc Jump_to_end.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
test case 1:
enter the limit:
11
Enter the elements:
1 3 5 8 9 2 6 7 6 8 9
count:3
path:1->3->8->9
test case 2:
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit:
5
Enter the elements:
5 1 2 4 5
count:1
path:5->5
program:
*/
# include<stdio.h>
int givenele[100],count=1,k=0,path[100];
int findlarger(int start,int end)
{
	int large = givenele[start];
	int index = start;
	for(int i=start+1;i<=end;i++)
	{
		if(large < givenele[i])
		{
			large = givenele[i];
			index = i;
		}
	}
	return index;
}
void printpath()
{
	printf("path:");
	printf("%d",path[0]);
	for(int i=1;i<k;i++)
		printf("->%d",path[i]);
	printf("\n");
}
void min_jumps(int start,int end)
{
	if((start+givenele[start] >= end))
	{
		printf("count:%d\n",count );
		path[k++]=givenele[end-1];
		printpath();
		return;
	}
	start = findlarger(start,givenele[start]);
	path[k++]=givenele[start];
	count++;
	min_jumps(start,end);
}
void main(void)
{
	int lim;
	printf("enter the limit:\n");
	scanf("%d",&lim);
	printf("Enter the elements:\n");
	for(int i=0;i<lim;i++)
		scanf("%d",&givenele[i]);
	path[k++]=givenele[0];
	min_jumps(0,lim);
}
