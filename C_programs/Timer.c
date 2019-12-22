/*create simple timer
save: timer.c
compiler: gcc timer.c
execute: gcc timer.c
*/
# include<stdio.h>
# include<stdlib.h>
# include<time.h>
void delay(int sec)
{
	int milli_sec=1000000*sec;
	clock_t curr_time=clock();

	while(clock()<(curr_time+milli_sec))
		;
}
int main()
{
	int sec;
	system("clear");
	printf("enter the time limit in seconds.\n");
	scanf("%d",&sec);
	for(int i=1;i<=sec;i++)
	{
		delay(1);
		printf("\033[A%d sec passed\n",i );
		if(i==sec)
		{
			printf("time out...\n");
			exit(0);
		}
	}
}
