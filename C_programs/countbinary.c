/*
aim:convert decimal to binary then find the frequency of 1's in binary
sravan@sravan-DL-IPMSB-H61:~$ gcc test.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the decimal number:
10
binary number is 1 0 1 0 
number of one's in binary number 2
program:
*/
# include<stdio.h>
int stack[10];
int top=-1;
void push(int n)
{
	top++;
	stack[top]=n;
}
void binary(int n)
{
	int i=0;
	int lim=n/2;
	while(i<=lim)
	{
		int temp;
		temp=n%2;
		
		push(temp);
		n=n/2;
		i++;
	}
}	
void print()
{   
	
label:	if(stack[top]==1)
   		{
   	 		 int i=top;
				while(i>=0)
					{
						printf("%d ",stack[i]);
						i--;
					}
		}
	else
		{
			top--;
			goto label;
		}
}
int count()
{
	int no=0,i=top;
	while(i>=0)
	{
		if(stack[i]==1)
			no++;
		i--;
	}
	return no;
}
int main()
{
	int c,bin;
	printf("enter the decimal number:\n");
	scanf("%d",&bin);
	binary(bin);
	printf("binary number is ");
	print();
	c=count();
	printf("\nnumber of one's in binary number %d",c );
	printf("\n");
	return 0;
}
