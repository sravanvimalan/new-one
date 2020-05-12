/*
input and ouput:
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the string
"A man,a plan,a canal: Panama"
palindrome
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the string
"race a car" 
not palindrome
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the string
,
palindrome
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the string

palindrome

program:
*/
# include<stdio.h>
# include<ctype.h>
char givenstring[100];
char temparr[100];
void main()
{
	int stringlength=0,j=0,k=0,flag=0;
	printf("enter the string\n");
	scanf("%[^\n]%*c", givenstring); 
	for(int i=0;givenstring[i]!='\0';i++)
	{
		if(givenstring[i] >= 'A' && givenstring[i] <= 'z')
		{
			givenstring[k++]=tolower(givenstring[i]);
			stringlength++;
		}
		
	}
	for(int i=stringlength-1 ; i>=0 ;i--)
	{
			temparr[j++]=givenstring[i];
	}
	
	for(int i=0;i<stringlength;i++)
	{
		if(givenstring[i] != temparr[i])
		{
		  flag = 1;
		}
	}
	if(flag == 0)
		printf("palindrome\n");
	else
		printf("not palindrome\n");
	
}
