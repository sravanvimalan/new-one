/*Given a number N. The task is to print series of asterisk(*) from 1 till N terms with increasing order and difference being 1.

Input:
The first line of the input is the number of testcases T. Each testcase contains only one value i.e. N.

Output:
For each testcase in new line, print series of asterisk's with one space between each iteration.

Constraints:
1 <= T <= 30
1 <= N <= 100

Example:
Input:
5
1
10
5
6
2

Output:
*
* ** *** **** ***** ****** ******* ******** ********* **********
* ** *** **** *****
* ** *** **** ***** ******
* **
program:
*/
# include<stdio.h>
# include<stdlib.h>
int main()
{
	system("clear");
	int n,n2,k=0,*ptr;
	printf("enter the lim");
	scanf("%d",&n2);
	ptr=(int *)malloc(n2*sizeof(int));
	printf("enter the nos\n");
	for(int i=0;i<n2;i++)
	{
		scanf("%d",&ptr[i]);
	}
   while(k<n2)
  	{
	for(int i=0;i<=ptr[k];i++)
		{
		for(int j=0;j<i;j++)
			{
			printf("*");
			}
		printf("\t");
		}	
		printf("\n");
		k++;
	}
}
