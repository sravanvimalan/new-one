/*
The question taken from Hackerrank for more query link:https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
Lilah has a string,s, of lowercase English letters that she repeated infinitely many times.

Given an integer,n, find and print the number of letter a's in the first n letters of Lilah's infinite string.

For example, if the string s='abcac' and n=10, the substring we consider is abcacabcac, the first 10 characters of her infinite string.
There are 4 occurrences of a in the substring.

Function Description

Complete the repeatedString function in the editor below. 
It should return an integer representing the number of occurrences of a in the prefix of length n in the infinitely
repeating string.
input:

sravan@sravan-DL-IPMSB-H61:~$ gcc repeatedstring.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
which letter count u want
a
enter the size of the string
5
number of character to consider
10
enter the string
a
b
c
a
c

output:
The no of occurrences:4

another example:
input:
./a.out
which letter count u want
a
enter the size of the string
3
number of character to consider
10
enter the string
a
b
a

output:
The no of occurrences:7

program:
*/
# include<stdio.h>
# include<stdlib.h>
int main()
{
	int strsize,n,temp1,size,pos=0,count=0,temp3;
	char *ptr,ch,temp;
	printf("which letter count u want\n");
	scanf("%c",&ch);
	printf("enter the size of the string\n");
	scanf("%d",&strsize);
	printf("number of character to consider\n");
	scanf("%d",&n);
	temp3=n;
	n=n/strsize; 
	n++;
	size=n*strsize;
	ptr=(char *)malloc(size*sizeof(char));
	printf("enter the string\n");
	//read the string
	for(int i=0;i<strsize;i++)
	{
		scanf("\n%c",&ptr[i]);
	}
	temp1=strsize;
	//filling the whole array with the given string.
	while(temp1>0)
	{
		temp=ptr[pos];
		for(int i=pos;i<size;i+=strsize)
		{
			ptr[i]=temp;
		}
		temp1--;
		pos++;
	}
	//find count
	for(int i=0;i<temp3;i++)
	{
		if(ch==ptr[i])
			count++;
	}
	printf("The no of occurrences:%d\n",count);
}

