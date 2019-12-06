/*
compile && execute:
sravan@sravan-DL-IPMSB-H61:~$ gcc snailmatrix.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
Given array:
1 2 3 
4 5 6 
7 8 9 
snailpath:[1->2->3->6->9->8->7->4->5]
program:
*/
# include<stdio.h>
int min=0,max=2,arr[3][3]={1,2,3,4,5,6,7,8,9};
void snailpathHT()								//PRINT HORIZONTAL TOP ELEMENTS
{
	for(int i=min;i<=max;i++)
	{
		printf("%d->",arr[min][i]);
	}
}
void snailpathVL()								//PRINT VERTICAL LEFT ELEMENTS
{
	for(int i=min;i<=max;i++)
	{
		if(i==min)
			continue;
		printf("%d->",arr[i][max]);
	}
}
void snailpathHD()								//PRINT HORIZONTAL DIAGONAL ELEMENTS
{
	for(int i=max;i>=min;i--)
	{
		if(i==max)
			continue;
		printf("%d->",arr[max][i]);
	}
}
void snailpathVT()								//PRINT VERTICAL TOP ELEMENTS
{
	for(int i=max;i>=min;i--)
	{
		if(i==max || i==min)
			continue;
		printf("%d->",arr[i][min]);
	}
}
void snailpathD()								//PRINT DIAGONAL ELEMENTS
{
	for(int i=min;i<=max;i++)
	{
		if(i==min || i==max)
			continue;
		printf("%d",arr[i][i]);
	}
}
void print()									//PRINT GIVEN MATRIX
{
	for(int i=min;i<=max;i++)
	{
		for(int j=min;j<=max;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{ 
  printf("Given MATRIX:\n");
  print();
  printf("snailpath:[");
  snailpathHT();
  snailpathVL();
  snailpathHD();
  snailpathVT();
  snailpathD();
  printf("]\n");
  return 0;
}
