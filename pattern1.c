/*
pattern:

12345
1234
123
12
1

*/

# include<stdio.h>
int main()
{
	int n=5,k=1;
	while(n>0)
	{
		for(int i=k;i<=n;i++)
		{
			printf("%d", i);
		}
		printf("\n");
		n--;
		k++;
	}
}
