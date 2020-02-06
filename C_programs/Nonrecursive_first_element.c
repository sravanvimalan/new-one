/*
input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc test.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
Distinct alphabets:
abcdee
frequency:
21122
Non recursive first element:
b
program:
*/
# include<stdio.h>
void main()
{
	char string[100]={"aabcddee"};
	char alpha[10];
	int frequency[10]={0},count=0,k=1,j=-1,i=0;
	char temp=string[0];
	alpha[0]=temp;
	for(i=0;string[i]!='\0';i++)
	{

		if(string[i]==temp)
		{
			count++;
			alpha[k]=string[i];
		}
		else
		{
			alpha[k]=string[i];
			j++;
			frequency[j]=count;
			k++;
			count=1;
			temp=string[i];
		}
	}
	frequency[++j]=count;
	printf("Distinct alphabets:\n");
	for(i=0;alpha[i]!='\0';i++)
	{
		printf("%c",alpha[i]);
	}
	printf("\n");
	printf("frequency:\n");
	for(i=0;i<10;i++)
	{
		if(frequency[i]==0)
			break;
		printf("%d",frequency[i]);

	}
	printf("\n");
	printf("Non recursive first element:\n");
	for(i=0;i<10;i++)
	{
		if(frequency[i]==1)
		{
			printf("%c\n",alpha[i]);
			break;
		}
	}
}
