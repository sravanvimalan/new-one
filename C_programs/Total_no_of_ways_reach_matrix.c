/*
sravan@sravan-DL-IPMSB-H61:~$ gcc Total_no_of_ways_reach_matrix.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out

test case 1:

enter the value for nxn matrix:
4
enter the location
2 2
no of ways :6

test case 2:

sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the value for nxn matrix:
4
enter the location
2 3
no of ways :10

test case 3:

sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the value for nxn matrix:
4
enter the location
3 3
no of ways :20

program:
*/
# include<stdio.h>
int matrix[100][100]={0};
int main(void)
{
	int n;
	int r,c;
	printf("enter the value for nxn matrix:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		matrix[0][i]=1;
		matrix[i][0]=1;
	}
	printf("enter the location\n");
	scanf("%d %d",&r,&c);

	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			matrix[i][j]=matrix[i-1][j]+matrix[i][j-1];

			if(i == r && j == c)
			{
				printf("no of ways :%d\n",matrix[i][j]);
				break;
			}
		}
	}

}
