/*
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
