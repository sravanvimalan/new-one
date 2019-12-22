/*
compile:
sravan@sravan-DL-IPMSB-H61:~$ gcc infixtopostfix.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
input:
enter the expression
(a+b)*(c-d)
output:
postfix:
ab+cd-*
program:
*/
# include<stdio.h>
# include<string.h>
# include<ctype.h>
# define size 20
int i=0,top=-1,j=0,len=0;
char expr[size],buff[size],stack[size],temp;
void print(char arr[],int lim)
{
	printf("postfix:\n");
	for(int i=0;i<lim;i++)
		printf("%c",arr[i]);
	printf("\n");
}
void push(char a)
{
	
	top++;
	stack[top]=a;
}
void pop()
{
    temp=stack[top];
    top--;
}
int main()
{
	
	printf("enter the expression\n");
	scanf("%s",expr);
	for(int i=0;i<strlen(expr);i++)
	{
		if(isalpha(expr[i]))
		{
			buff[j]=expr[i];
			j++;
		}
		else if(expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/' || expr[i] == '(' )
		{	
				push(expr[i]);
		}
		else if(expr[i] == ')')
		{
			pop();
				while(temp!= '(' )
				{
						
						buff[j]=temp;
						j++;
						pop();
					
				}
				while(top != -1)
				{
					pop();
					buff[j]=temp;
					j++;
				}

		}

	}
	len=strlen(buff);
	print(buff,len);
}
