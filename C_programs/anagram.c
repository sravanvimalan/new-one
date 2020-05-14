/*
input and ouput:
sravan@sravan-DL-IPMSB-H61:~$ gcc anagram.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the no of words do u have :6
enter the words :
eat tea tan ate nat bat
input:
[eat,tea,tan,ate,nat,bat]
output:
[eat,tea,ate]
[tan,nat]
[bat]
program:
*/
# include<stdio.h>
char givenstring[100][100];
int indexarr[100]={0};
int k=0;
int indexfound(int n)
{
	indexarr[k++]=n;
}
int check(int n)
{
	for(int i=0;i<k;i++)
	{
		if(n == indexarr[i])
		{
			return 0;
		}
	}
	return 1;
}
int length(char arr[])
{
	int len=0;
	for(int i=0;arr[i] !='\0' ;i++)
	{
		len++;
	}
	return len;
}
void print(char arr[])
{
	for(int i=0;arr[i] != '\0';i++)
	{
		printf("%c",arr[i]);
	}
}
int compare(char arr1[],char arr2[],int len)
{	
	int flag=0;
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(arr1[i] == arr2[j])
				flag = 1;
		}
		if(flag)
		{
			flag =0;
			continue;

		}
		else
		{
			return 0;
		}
	}
	
	return 1;
}
void main()
{
	int no_words;
	printf("enter the no of words do u have :");
	scanf("%d",&no_words);
	printf("enter the words :\n");
	for(int i=0;i<no_words;i++)
	{
		 scanf("%s[^\n]",givenstring[i]);
	}
	printf("input:\n[");
	printf("%s",givenstring[0]);
	for(int i=1;i<no_words;i++)
		printf(",%s",givenstring[i]);
	printf("]\n");
	printf("output:\n");
	for(int i=0;i<no_words;i++)
	{
		if(check(i))
		{
			printf("[");
			printf("%s",givenstring[i]);
			indexfound(i);
			for(int j=0;j<no_words;j++)
			{
				if(check(j))
				{
					if(length(givenstring[i]) == length(givenstring[j])) 
					{
						if(compare(givenstring[i],givenstring[j],length(givenstring[i])))
						{
							printf(",%s",givenstring[j]);
							indexfound(j);
						}
					}
				}
			}
				printf("]\n");	
		}
	}	
}	
	


