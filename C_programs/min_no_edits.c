/*
program to find the minimum no of edits required
input and output:
test case 1

sravan@sravan-DL-IPMSB-H61:~$ gcc min_no_edits.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
Enter the String 1
cat
Enter the String 2
dog
The minimum number of edits required to change string 1 to string 2
From string: cat
To string: dog
min_no_edit_count: 3

test case 2
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
Enter the String 1
biting
Enter the String 2
sitting
The minimum number of edits required to change string 1 to string 2
From string: biting
To string: sitting
min_no_edit_count: 2

test case 3

sravan@sravan-DL-IPMSB-H61:~$ ./a.out
Enter the String 1
ca
Enter the String 2
d
The minimum number of edits required to change string 1 to string 2
From string: ca
To string: d
min_no_edit_count: 2

program:
*/

# include<stdio.h>
# include<string.h>
char arrfrom[15],arrto[15],arr_common_key[15];
int arr_common_value[15],k=0;
int arrfromlen,arrtolen,arr_common_key_length,min_no_edit_count=0,len_diff=0;
char temp1,temp2;
int findlen(char arr[])
{
	int count=0;
	for(int i=0;arr[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
void pass(char a)
{
	int len=findlen(arr_common_key),flag=0;
	if(len == 0)
	{
		arr_common_key[k]=a;
		k++;
	}
	else
	{
		for(int i=0;i<len;i++)
		{
			if(arr_common_key[i]==a)
				flag=1;
		}
		if(flag == 0)
		{
			arr_common_key[k]=a;
			k++;
		}
	}
}
void findcommon()
{
	for(int i=0;i<arrfromlen;i++)
	{
		for(int j=0;j<arrtolen;j++)
		{
			if(arrfrom[i]==arrto[j])
			{
				pass(arrto[j]);
			}
		}
	}
	arr_common_key_length=findlen(arr_common_key);
}
void findcommoncount()
{
	int count;
	k=0;
	for(int i=0;i<arr_common_key_length;i++)
	{
		count=0;

		for(int j=0;j<arrtolen;j++)
		{

			if(arr_common_key[i]==arrto[j])
			{
				count++;
			}
		}
		arr_common_value[k]=count;
		k++;
	}
}

   void swap(char a,int n)
{
	int len=findlen(arrfrom);
    int start=n,end=len-1;
     temp1 = arrfrom[start];
    for(int i=start;i<=end;i++)
    {
       arrfrom[start]=a;
       temp2=arrfrom[i+1];
       arrfrom[i+1]=temp1;
       temp1=temp2;
	}
}
int check(char a)
{
	int flag=0;
	for(int i=0;i<arr_common_key_length;i++)
	{
		if(arr_common_key[i]==a)
			flag=1;
	}
	if(flag == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int find_index(char a )
{
	for(int i=0;i<arr_common_key_length;i++)
	{
		if(arr_common_key[i]==a)
		{
			return i;
		}
	}
}
void find_min_no_edit()  
{
	int index,check_result;
	for(int i=0;i<arrtolen;i++)
	{
		
			if(arrto[i] != arrfrom[i])
			{
				check_result=check(arrfrom[i]);
				min_no_edit_count++;
				if(check_result)
				{
					 index=find_index(arrto[i]);
					 if(arr_common_value[index] == 0)
					 {
					 	arrfrom[i]=arrto[i];
					 }
					 if(arr_common_value[index] >= 1)
					 {
					 	swap(arrto[i],i);
					 	arr_common_value[index]=arr_common_value[index]-1;
					 }
				}
				else
				{
					arrfrom[i]=arrto[i];
				}
			}
			else
			{
					 index=find_index(arrto[i]);

					  if(arr_common_value[index] > 1)
					 {
					 	arr_common_value[index]=arr_common_value[index]-1;
					 }
			}
			if(arrfrom[i]=='\0')
			{
				arrfrom[i]=arrto[i];
			}
		}
		if(arrfromlen>arrtolen)
		{
			len_diff=arrfromlen-arrtolen;
		}

	
}
int main(void)
{
	printf("Enter the String 1\n");
	scanf("%s",arrfrom);
	printf("Enter the String 2\n");
	scanf("%s",arrto);
	printf("The minimum number of edits required to change string 1 to string 2\n");
	printf("From string: %s\n",arrfrom);
	arrfromlen=findlen(arrfrom);
	arrtolen=findlen(arrto);
	findcommon();
	findcommoncount();
	find_min_no_edit();
	printf("To string: %s\n",arrto);
	printf("min_no_edit_count: %d\n",min_no_edit_count+len_diff);
	return 0;
}
