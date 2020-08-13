//Memoization technique(Top Down approach)
# include<stdio.h>
# define size 100
int lookup[size];
int fib(int num)
{
	//intialize loopup table all value as -1
	if(lookup[num] == -1)
	{
		if(num <= 1)
		{
			lookup[num] = num;
		}
		else
			lookup[num] = fib(num-1) + fib(num-2);
	}
	return lookup[num];

}
void intialize()
{
	for(int i=0;i<100;i++)
		lookup[i]=-1;
}
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	intialize();
	printf("%d\n",fib(num));
	return 0;
}
