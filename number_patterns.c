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
/*
12345
2345
345
45
5
code of above pattern
*/
# include<stdio.h>
int main()
{
	int n=5,k=1,r=5;
	while(r>0)
	{
		for(int i=k;i<=n;i++)
		{
			printf("%d",i);
		}
		k++;
		r--;
		printf("\n");
	}
}
