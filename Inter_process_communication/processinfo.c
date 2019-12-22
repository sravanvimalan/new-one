/*
input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc processinfo.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
my process id:4927
my parent process id:4379
cross verification of pid by executing process commands on shell
0 S sravan    4927  4379  0  80   0 -  1126 wait   19:58 pts/0    00:00:00 ./a.o
0 S sravan    4928  4927  0  80   0 -  1156 wait   19:58 pts/0    00:00:00 sh -c
program:
*/
                                     //declare standard libraries

#include <stdio.h>
#include <stdlib.h>
                                     //libraries for inter-process communication
#include <sys/types.h>
#include <unistd.h>

int main(){
	int mypid,myppid;                 //pid:process id, ppid:parent processid
	mypid = getpid();
	myppid = getppid();
	printf("my process id:%d\n",mypid);
	printf("my parent process id:%d\n",myppid);
	printf("cross verification of pid by executing process commands on shell\n");

	system("ps -elf");                //command that send to shell 
	return 0;
}
