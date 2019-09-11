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
/*
1
21
321
4321
54321
code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=1,r=0,lim=1;
	while(r<5)
	{
		lim=r+1;
		for(int i=lim;i>=n;i--)
		{
			printf("%d",i );
		}
		printf("\n");
		r++;
	}
	
    
}
/*
5
54
543
5432
54321
code for above pattern
*/
# include<stdio.h>
int main()
{
	int e=5,r=1,s=5;
	while(r<=5)
	{
		for(int i=s;i>=e;i--)
		{
			printf("%d",i );
		}
		printf("\n");
		e--;
		r++;
	}
    
}
/*
1
22
333
4444
55555
code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=1,r=5;
	while(r>0)
	{
		for(int i=1;i<=n;i++)
		{
			printf("%d",n );
		}
		printf("\n");
		n++;
		r--;
	}
    
}
/*
5
44
333
2222
11111
code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=1,r=5,p=5;
	while(r>0)
	{
		for(int i=1;i<=n;i++)
		{
			printf("%d",p );
		}
		n++;
		printf("\n");
		p--;
		r--;	
	}
    
}
/*
55555
4444
333
22
1
code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=5,r=5,p=5;
	while(r>0)
	{
		for(int i=1;i<=n;i++)
		{
			printf("%d",p );
		}
		n--;
		printf("\n");
		p--;
		r--;	
	}
    
}
/*
11111
2222
333
44
5
code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=5,r=5,p=1;
	while(r>0)
	{
		for(int i=1;i<=n;i++)
		{
			printf("%d",p );
		}
		n--;
		printf("\n");
		p++;
		r--;	
	}
    
}
/*
12345
4321
123
21
1
code for above pattern
*/
# include<stdio.h>
int main()
{
	int r=5,n=0;
	while(r>0)
	{
		if(r%2 == 1)
		{
		
			for(int i=1;i<=r;i++)
			{
				n++;
				printf("%d",n );
				
			}
			printf("\n");
		}
		else
		{
			n=n-1;
			for(int i=n;i>0;i--)
			{
				printf("%d",n);
				n--;
			}
			printf("\n");
		}
		r--;
	}
    
}
/*
1234567
12345
123
1
code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=7,r=1;
	while(r<=4)
	{
		for(int i=1;i<=n;i++)
		{
			printf("%d",i );
		}
		printf("\n");
		n-=2;
		r++;
	}
}

