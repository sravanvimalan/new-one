/*
Ques:
Count trailing zeroes in factorial of a number
Given an integer n, write a function that returns count of trailing zeroes in n!.

input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc trailingZerosinfact.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out

enter the number:
10
2

sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the number:
7
count:1

sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the number:
50
count:12

sravan@sravan-DL-IPMSB-H61:~$ gcc trailingZerosinfact.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the number:
-1
enter positive number :( 

program:
*/
# include<stdio.h>
int main()
{
	long int num,count=0;
	printf("enter the number:\n");
	scanf("%ld",&num);
	if(num<0)
	{
		printf("enter positive number :( \n");
		return 0;
	}
	if(num%10 < 5)
		{
			num -= num%10;
		}
	else
		{
			int incr=10;
			incr -= num%10;
			num += incr;
		}
	if((num%10 == 0 || num%10 == 5 )&& num/10 != 0)
	{
		while(num%10 == 0 || num%10 == 5)
		{
			long int quotient = num/5 ;
			count+=quotient;
			num=quotient;
		}
		printf("count:%ld\n",count);
		return 0;
	}
	if(num<10 && num>4)
		{
			printf("count:%ld\n",++count);
			return 0;
		}
	else
		{
			printf("count:%ld\n",count);
			return 0;
		}
	
}
