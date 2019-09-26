/*
Missing number in array
input:
enter the limit of array
5
enter the elements
1
3
5
7
9
output:
missing no:2
missing no:4
missing no:6
missing no:8
program:
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  //code
  int *ptr,n,j;
  printf("enter the limit of array\n");
  scanf("%d",&n);
  if(n==1)
    n=2;
  ptr=(int *)malloc((n)*sizeof(int));
  if(ptr == NULL)
  {
      printf("M/Y ALLOCATION FAIL");
      return 0;
  }
  printf("enter the elements\n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&ptr[i]);
  }
   j=ptr[0];
  for(int i=0;i<n;i++)
  {
      
      if(ptr[i]!=j)
      {
          printf("missing no:%d\n",j);
          i--;
      }
      j++;
  }
  return 0;
}
