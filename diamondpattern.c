/*
diamond pattern:
input & ouput:
sravan@sravan-DL-IPMSB-H61:~$ gcc diamondpattern.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the n:5
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
program:
*/
# include<stdio.h>
int main()
{
	int n,t=0;
	printf("enter the n:");
	scanf("%d",&n);
	//upper part
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
			printf(" ");
		for(int k=1;k<(i*2);k++)
			printf("*");
		printf("\n");
	}
	//Lower part
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=t;j++)
			printf(" ");
		t++;
		for(int k=1;k<i*2;k++)
			printf("*");
		printf("\n");
	}
}
