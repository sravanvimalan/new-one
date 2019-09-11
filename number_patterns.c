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
/*
54321
4321
321
21
1
code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=5,r=5;
	while(r>0)
	{
		for(int i=n;i>0;i--)
		{
			printf("%d",i);
		}
		printf("\n");
		n--;
		r--;
	}
}
/*
54321
5432
543
54
5
code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=5,r=1;
	while(r<=5)
	{
		for(int i=n;i>=r;i--)
		{
			printf("%d",i);
		}
		r++;
		printf("\n");

	}
}
/*
1
12
123
1234
12345
code for above pattern
*/
# include<stdio.h>
int main()
{
	int no=1,r=1;
    while(r<=5)
    {
    	for(int i=1;i<=no;i++)
    	{
    		printf("%d",i);
    	}
    	printf("\n");
    	no++;
    	r++;
    }
}
/*
5
45
345
2345
12345
code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=5,r=5,lim=5;
	while(r>0)
	{
		for(int i=n;i<=lim;i++)
		{
			printf("%d",i );
		}
		printf("\n");
		n--;
		r--;
	}
	
    
}
