//Tabulation method bottom up appproach
# include<stdio.h>
# define size 100
int lookup[size];
int fib(int num)
{
	//intially we store the base values into the lookup array
	lookup[0]=0;
	lookup[1]=1;
	for(int i=2;i<=num;i++)
	{
		lookup[i]=lookup[i-1]+lookup[i-2];
	}
	return lookup[num];
}
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("%d\n",fib(num));
	return 0;
}
