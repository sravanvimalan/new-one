/*John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers
representing the color of each sock, determine how many pairs of socks with matching colors there are.
input:
arr[9]={10 ,20 ,20 ,10 ,10 ,30 ,50 ,10 ,20};
Save the program "merchant.c" then,
compile:
sravan@sravan-DL-IPMSB-H61:~$ gcc merchant.c
execute:
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
output:
The no of even pairs:3
The no of odd pairs:6

NB:https://www.hackerrank.com/challenges/sock-merchant/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
program:
*/
#include <stdio.h>
int temp[9]={0,0,0,0,0,0,0,0,0},arr[9]={10 ,20 ,20 ,10 ,10 ,30 ,50 ,10 ,20};
int finddistict(int n,int pos);
int findpair(int arr[],int n)
{
	
	int temp,i_count=0,f_count=0;
	for(int i=0;i<n;i++)
	{
		if(finddistict(arr[i],i))
		{
			temp=arr[i];
			for(int j=0;j<n;j++)
				{
					if(arr[i]==arr[j])
					i_count++;
				}
		}
		if(i_count>0)
			i_count=i_count/2;
		f_count=f_count+i_count;
		i_count=0;
	}
	
	printf("The no of even pairs:%d\nThe no of odd pairs:%d\n",f_count,9-f_count);
}
int finddistict(int n,int pos)
{
	int count=0;
	temp[pos]=n;
	for(int i=0;i<9;i++)
	{
		if(n==temp[i])
		{
			count++;
		}
	}
	if(count==1)
		return 1;
	else
		return 0;

}
int main()
{
	findpair(arr,9);
	return 0;
}
