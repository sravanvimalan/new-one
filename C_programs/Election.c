/*
input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc Election.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the total no of votes:
3       
enter the names:
andy	blake	clark	
input:
andy	blake	clark	
output:
andy win
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the total no of votes:
7
enter the names:
sravan pranav neeraj kishore sravan sravan neeraj
input:
sravan	pranav	neeraj	kishore	sravan	sravan	neeraj	
output:

sravan win
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the total no of votes:
7
enter the names:
sravan	pranav	neeraj	kishore	sravan neeraj kishore
input:
sravan	pranav	neeraj	kishore	sravan	neeraj	kishore	
output:

kishore win

          NB:if participants have same no of votes, we consider the winner on the basis of lexicographically manner
          
program:

*/
# include<stdio.h>
# include<ctype.h>
# include<string.h>
char cand_name[100][10],temp[20];
int count[10]={0},k=0;
int main(void)
{
	int total_vote;
	printf("enter the total no of votes:\n");
	scanf("%d",&total_vote);
	printf("enter the names:\n");
	for(int i=0;i<total_vote;i++)
		scanf("%s",cand_name[i]);
	printf("input:\n");
	for(int i=0;i<total_vote;i++)
		printf("%s\t",cand_name[i]);
    for(int i=0;i<total_vote;i++)
    {
    	for(int j=i+1;j<total_vote;j++)
    	{
    		if(strcmp(cand_name[i],cand_name[j]) > 0)
    		{
    			strcpy(temp,cand_name[i]);
    			strcpy(cand_name[i],cand_name[j]);
    			strcpy(cand_name[j],temp);
    		}
    	}
    }
    for(int i=0;i<total_vote;i++)
    {
		if(strcmp(cand_name[i],cand_name[i+1]) == 0)
			count[k]+=1;
		else
		{
			count[k]+=1;
			k++;
		}
	}
    int largest = count[0],index=0;
    for(int i=1;i<k;i++)
    {
    	if(largest < count[i])
    	{
    		largest = count[i];
    		index=i;
    	}
    }
    printf("\noutput:\n");
    if(largest == 1)
    {
    	printf("%s win\n",cand_name[0]);
    	return 0;
    }
    else
    {
    	int i=0;
    	for(;i<total_vote;i++)
    	{
    		if(strcmp(cand_name[i],cand_name[i+1]) != 0)
    			index--;
    		if(index == 0)
    			break;
    	}
   		 printf("\n%s win\n",cand_name[i+1]);
   		 return 0;
    }

   
	
}	
