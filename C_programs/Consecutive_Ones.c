/*
Return the longest run of 1s for a given integer n's binary representation.

Input and Output:

sravan@sravan-DL-IPMSB-H61:~$ gcc Consecutive_Ones.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the decimal number
242
longest run of 1 is 4

sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the decimal number
342
longest run of 1 is 2

program:
*/
# include<stdio.h>
int main()
{
	int decimal,long_run_one=0,count=0;
	printf("enter the decimal number\n");
	scanf("%d",&decimal);
	while(decimal != 0)
	{
		int rem = decimal%2;
		if(rem == 1)
			count++;
		else
		{
			if(count > long_run_one)
			{
				long_run_one = count;
			}
			count=0;
		}
		decimal = decimal/2;
	}
	if(count > long_run_one)
		long_run_one = count;
	printf("longest run of 1 is %d\n",long_run_one);
}
