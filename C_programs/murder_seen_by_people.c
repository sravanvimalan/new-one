/*
Hi, here's your problem today. This problem was recently asked by Google:

There are n people lined up, and each have a height represented as an integer. A murder has happened right in front of them, and only people who are taller than everyone in front of them are able to see what has happened. How many witnesses are there?

Example:
Input: [3, 6, 3, 4, 1]  
Output: 3
Explanation: Only [6, 4, 1] were able to see in front of them.

input and output:

sravan@sravan-DL-IPMSB-H61:~$ gcc murder_seen_by_people.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
Enter the no of people
5
Enter thier heights:
3 6 3 4 1
num_of_people_seen:3

program:
*/
# include<stdio.h>
# include<stdlib.h>
int * ptr,num_of_people;
void num_of_people_seen()
{
	int flag=0,count=0;
	for(int i=0;i<num_of_people-1;i++)
	{
		for(int j=i+1;j<num_of_people;j++)
		{
			if(ptr[i]>ptr[j])
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			count++;
		flag=0;
	}
	printf("num_of_people_seen:%d\n",count+1);
}
int main()
{
	
	printf("Enter the no of people\n");
	scanf("%d",&num_of_people);
	ptr=(int *)malloc(sizeof(int));
	printf("Enter thier heights:\n");
	for(int i=0;i<num_of_people;i++)
	{
		scanf("%d",&ptr[i]);
	}
	num_of_people_seen();

}
