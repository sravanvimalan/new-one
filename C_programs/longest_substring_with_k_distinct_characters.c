/*
Question:

You are given a string s, and an integer k. Return the length of the longest substring in s that contains at most k distinct characters.

For instance, given the string:
aabcdefff and k = 3, then the longest substring with 3 distinct characters would be defff. The answer should be 5.

Here's a starting point:

def longest_substring_with_k_distinct_characters(s, k):
  # Fill this in.

print longest_substring_with_k_distinct_characters('aabcdefff', 3)
# 5 (because 'defff' has length 5 with 3 characters)

input and ouptut:

compile & execute:
sravan@sravan-DL-IPMSB-H61:~$ gcc longest_substring_with_k_distinct_characters.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out

test case (1):

enter the string:
aabcdefff
Given string:[a,a,b,c,d,e,f,f,f]
Enter the distinct_count:
3
Longest substring:[d,e,f,f,f]
The longest substring with 3 distinct characters would be 5.

test case (2):

execute:
sravan@sravan-DL-IPMSB-H61:~$ ./a.out

enter the string:
aasdwwertffgh
Given string:[a,a,s,d,w,w,e,r,t,f,f,g,h]
Enter the distinct_count:
5
Longest substring:[a,a,s,d,w,w,e]
The longest substring with 5 distinct characters would be 7.

NB && CON'S: *don't enter value of distint_count < count_of_distinct_variable_in_input_string.
    	     *if input string has multiple substring have same distinct_count and length, it prints only one substring-
	      (may be the first one).
	   
	 Overcome Con's
	 *write function to count the distinct elements and compare with given_distinct_count.
	  if(distinct_elements > given_distinct_count)
	  	print "substring not possible"
	 *Second problem can overcome by print all the elements has 'distinct_count == max'
	  we can get this value from the stack.
	  
	  I KNOW HOW TO DO THIS ...BUT NOW I DON'T HAVE TIME RIGHT NOW XD !!! HAPPY CODING !!!
program:
*/

# include<stdio.h>
char distinct_var_stack_1[100];
int start_end_index_count_stack_2[100],top1=-1,top2=-1,count=0,start_index,end_index,k=0,i,distinct_count,len=0;
char given_string[100]; 
void print_distinct_stack(int top)
{
	int i=0;
	printf("%c",distinct_var_stack_1[top]);
}
void ele_exist(char ele)
{
	for(int i=top1 ; i>=0 ;i--)
	{
		if(ele == distinct_var_stack_1[i])
		{
			return;
		}
	}
		k++;
		return;
}
void push_int(int no)
{
	start_end_index_count_stack_2[++top2] = no;
	return;
}
int push_char(char ele)
{
	ele_exist(ele);
	if(i == len-1 && k<=3)
	{
		distinct_var_stack_1[++top1] = ele;
		push_int(i);
		push_int(count+1);
	}
	if(k <= distinct_count )
	{
		distinct_var_stack_1[++top1] = ele;
		return 0;
	}
	else
	{
		k=0;
		return 1;
	}
}

void pop()
{
	top1--;
}
void longest_substring_with_k_distinct_characters()
{
	push_int(0);
	start_index=0;
	for(i=0;given_string[i] != '\0';i++)
	{
		if(push_char(given_string[i]))						
		{

			push_int(i-1);
			push_int(count);
			count = 0;
			push_int(i);
			i=i-1;
			while(top1 != -1)
			{
					pop();
			}
		}
		else
		{
			count++;
		}
	}
}
void longest_substring()
{
	int large=start_end_index_count_stack_2[2];
	start_index=0,end_index=start_end_index_count_stack_2[1];
	for(int i=2 ;i <= top2 ;i+=3)
	{
		if(start_end_index_count_stack_2[i] > large)
		{
			large = start_end_index_count_stack_2[i];
			start_index = start_end_index_count_stack_2[i-2];
			end_index = start_end_index_count_stack_2[i-1];
		}
	}
	printf("Longest substring:");
	printf("[%c",given_string[start_index]);
	for(int i=start_index+1;i<=end_index;i++)
	{
		printf(",%c",given_string[i]);
	}
	printf("]\n");
	printf("The longest substring with %d distinct characters would be %d.\n",distinct_count,large);

}
int main()
{
	printf("enter the string:\n");
	scanf("%s",given_string);
	printf("Given string:");
	printf("[%c", given_string[0]);
	for(int i=1;given_string[i]!='\0';i++)
	{
		printf(",%c",given_string[i]);
		len++;
	}
	printf("]\n");
	len++;
	printf("Enter the distinct_count:\n");
	scanf("%d",&distinct_count);
	longest_substring_with_k_distinct_characters();
	longest_substring();
	return 0;
}
