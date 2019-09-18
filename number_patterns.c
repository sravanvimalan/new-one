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
/*
1
01
101
0101
code for above pattern
*/
# include<stdio.h>
int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=i;j>=1;j--)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
}
/*
1
2 4
1 3 5
2 4 6 8
1 3 5 7 9
code for above pattern
*/
# include<stdio.h>
int main()
{
	int swap=1;
	while(swap<6)
   {
		if(swap%2==1)
		{
			for(int j=1;j<(2*swap);j++)
				{
					if(j%2==1)
					printf("%d ",j );

				}
				printf("\n");
		swap++;

	}
	else
	{
		for(int j=2;j<=(2*swap);j++)
		{
				if(j%2==0)
				printf("%d ",j );
		}
			printf("\n");
			swap++;
	}
  }
}
/*
55555
45555
34555
23455
12345
code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=5;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			printf("%d",n );
			if(n<5)
				n++;
		}
		printf("\n");
		n=n-i;
	}

}
/*
1
23
456
78910

code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=1;
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}

}
/*
1
10
101
1010
10101

code for above pattern
*/
# include<stdio.h>
int main()
{
	int n=1;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",n%2);
			n++;
		}
		printf("\n");
		n=1;
	}

}


