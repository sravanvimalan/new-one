/*
input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc frequency.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the range start from 1 to ?
5
enter the lim:
5
enter the no:
2 3 2 3 5
program:
*/


# include<stdio.h>
# include<stdlib.h>
int main()
{
	int lim,*ptr1,range,*ptr2;
	printf("enter the range start from 1 to ?\n");
	scanf("%d",&range);
	ptr1 = (int *)malloc(range*sizeof(int));
	ptr1[0]=-1;
	printf("enter the lim:\n");
	scanf("%d",&lim);
	ptr2 = (int *)malloc(lim*sizeof(int));
	printf("enter the no:\n");
	for(int i=0;i<lim;i++)
		scanf("%d",&ptr2[i]);
	for(int i=0;i<lim;i++)
		ptr1[ptr2[i]] = ptr1[ptr2[i]] + 1 ;
	for(int i=1;i<=range;i++)
		printf("%d ",ptr1[i]);
	printf("\n");


}
