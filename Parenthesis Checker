/*
question:https://practice.geeksforgeeks.org/problems/parenthesis-checker/0
sravan@sravan-DL-IPMSB-H61:~$ gcc parathesis.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the brackets
{([])}
balanced
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the brackets
[{})
unbalanced
program:
*/
# include<stdio.h>
# include<string.h>
# define size 10
int top=-1,flag=0;
char stack[size];
void push(char a)
{
	top++;
	stack[top]=a;
}
void pop(char a)
{
	if(a == ')')
	{
		a='(';
		if(stack[top] == a)
			top--;
		else
			flag=1;
	}
	 if(a == ']')
	 {
	 	a='[';
	 	if(stack[top] == a)
	 		top--;
	 	else
	 		flag=1;
	 }
	if(a == '}')
	{
		a='{';
		if(stack[top]==a)
			top--;
		else
			flag=1;
	}

}
int main(void)
{
	
	char temp[size];
	printf("enter the brackets\n");
	scanf("%s",temp);
	for(int i=0;i<strlen(temp);i++)
	{
		if(temp[i] == '{' || temp[i] == '(' || temp[i] == '[')
			push(temp[i]);
		else if(temp[i] == '}'|| temp[i] == ')' || temp[i] == ']')
			pop(temp[i]);
	}
	if(flag == 0 && top==-1)
		printf("balanced\n");
	else
		printf("unbalanced\n");
}
