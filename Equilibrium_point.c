/*
question:https://practice.geeksforgeeks.org/problems/equilibrium-point/0
input:
sravan@sravan-DL-IPMSB-H61:~$ gcc equilibrium.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the limit :10
enter the elements :0 0 0 0 0 0 0 1 2 1
mid pos 6
mid pos 7
mid pos 8
mid pos 9
mid pos 8
output:
position: 8 and value 2
program:
*/
# include<stdio.h>
# include<stdlib.h>
int findsum(int *ptr,int slim,int elim)
{
	int sum=0;
	for(int i=slim;i<elim;i++)
	{
		sum+=ptr[i];
	}
	return sum;
}
void findequil(int *ptr,int lim)
{
	int mid=lim/2,i=0;
	while( i<lim/2)
	{	
		if(findsum(ptr,0,mid)>findsum(ptr,mid+1,lim))
			{
				mid--;
				printf("mid pos %d\n",mid );
			
			}
		else
		{
			mid++;
			printf("mid pos %d\n",mid );
			
		}
		i++;
	}
	printf("position: %d and value %d\n",mid,ptr[mid]);
}
int main(void)
{
	int *ptr,lim;
	printf("enter the limit :");
	scanf("%d",&lim);
	ptr=(int *)malloc(lim*sizeof(int));
	printf("enter the elements :");
	for(int i=0;i<lim;i++)
		scanf("%d",&ptr[i]);
	findequil(ptr,lim);
}
