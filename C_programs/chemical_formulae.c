/*
Problem description:
Given a chemical formula as a string, the task is to get the count of atoms in this chemical formula.
1. No need to verify if the input is a valid chemical formula in all aspects.
2. However, please validate if basic structure is followed. For example, an atom can be represented using:
	a. A capital letter. (Eg: O)
	b. A capital letter followed by a number (eg: H2)
	c. Two letters where capital letter is followed by a small letter (eg: Na)
	d. Two letters where a capital letter is followed by a small letter and number (eg: Fe2)
3. A formula can have one or more atoms represented in it.

input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc test.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
Fe     2
H      3
O      1
H      1
sravan@sravan-DL-IPMSB-H61:~$ gcc test.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
Na      1
Cl      2
Na      1
O       2
program:
*/
# include<stdio.h>
void main()
{
	char formula[100]={"NaCl2NaO2"};
	for(int i=0;formula[i]!='\0';i++)
	{
		int temp1,temp2;
		temp1=formula[i];
		temp2=formula[i+1];
		int n;
		n=formula[i+1]-48;
		if(temp1>=97 && temp1<=122)
		{
			if(n>=0 && n<=9)
			{
				printf("%c%c \t %d\n",formula[i-1],formula[i],n);
			}
			else
			{
				printf("%c%c \t %d\n",formula[i-1],formula[i],1);
			}

		}
		if(((temp1>=65 && temp1<=90) &&  (temp2>=65 && temp2<=90)) || ((temp1>=65 && temp1<=90) && (n>=0 && n<=9)) || ((temp1>=65 && temp1<=90) && (temp2 == '\0' )))
			{
				if(((temp1>=65 && temp1<=90) &&  (temp2>=65 && temp2<=90)) || ((temp1>=65 && temp1<=90) && (temp2 == '\0' )))
				{
					printf("%c \t %d\n",temp1,1);
				}
				else
				{
					printf("%c \t %d\n",temp1,n);
				}
			}
	}
}
