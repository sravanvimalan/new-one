/*
test case 1:

sravan@sravan-DL-IPMSB-H61:~$ gcc string_rotate.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the string: 
amazon
No of rotation: 
2
1th rotation: mazona
2th rotation: azonam

test case 2: 

sravan@sravan-DL-IPMSB-H61:~$ gcc string_rotate.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the string: 
amazon
No of rotation: 
6
1th rotation: mazona
2th rotation: azonam
3th rotation: zonama
4th rotation: onamaz
5th rotation: namazo
6th rotation: amazon

program:
*/
# include<stdio.h>
char givenstring[100];
void rotate(int);
void print(int,int);
int findlength();
int main()
{
  int n,k=1;
  printf("enter the string: \n");
  scanf("%s",givenstring);
  int len=findlength();
  printf("No of rotation: \n");
  scanf("%d",&n);
  while(n > 0 )
  {
  	rotate(len);
  	print(len,k);
  	k++;
  	n--;
  }
}
void rotate(int len)
{
	char temp;
	temp = givenstring[0];
	for(int i=0;i<len;i++)
	{	
		givenstring[i]=givenstring[i+1];
	}
	givenstring[len-1] = temp;
}
void print(int len,int k)
{
	
	printf("%dth rotation: ", k);
	for(int i=0;i < len;i++)
	{
		printf("%c",givenstring[i]);
	}
	printf("\n");
}
int findlength()
{
	int len = 0;
	for(int i=0;givenstring[i]!= '\0';i++)
		len++;
	return len;
}
