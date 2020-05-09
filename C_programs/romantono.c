/*
input and output:
sravan@sravan-DL-IPMSB-H61:~$ gcc romantono.c
sravan@sravan-DL-IPMSB-H61:~$ ./a.out

test case 1:
enter the Roman No: 
XXLM
corresponding value :930
sravan@sravan-DL-IPMSB-H61:~$ ./a.out

test case 2:
enter the Roman No: 
xxlm
corresponding value :930

test 3:
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the Roman No: 
XX
corresponding value :20
sravan@sravan-DL-IPMSB-H61:~$ ./a.out

test cae 4:
enter the Roman No: 
III
corresponding value :3

test case 5:
sravan@sravan-DL-IPMSB-H61:~$ ./a.out
enter the Roman No: 
XXXX
corresponding value :40

program:

*/

#include <stdio.h>
#include <ctype.h>
char given_romanno[100];
int value=0,start_index=0;
int forincre(char a)
{
        if(a == 'I')
        {
            value++;
        }
        if(a == 'V')
        {
            value+=5;
        }
        if(a == 'X')
        {
            value+=10;
        }
        if(a == 'L')
        {
            value+=50;
        }
        if(a == 'C')
        {
            value+=100;
        }
        if(a == 'D')
        {
            value+=500;
        }
        if(a == 'M')
        {
            value+=1000;
        } 

        return value;
}
int fordecre(char a)
{
        if(a == 'I')
        {
            value--;
        }
        if(a == 'V')
        {
            value-=5;
        }
        if(a == 'X')
        {
            value-=10;
        }
        if(a == 'L')
        {
            value-=50;
        }
        if(a == 'C')
        {
            value-=100;
        }
        if(a == 'D')
        {
            value-=500;
        }
        if(a == 'M')
        {                                       
            value-=1000;
        } 
         return value;

}
int compare(char a, char b)
{
    char romanarr[14]={'I','1','V','2','X','3','L','4','C','5','D','6','M','7'};
    int no1,no2;
    for(int i =0;i<14;i+=2)
    {
        if(a == romanarr[i])
        {
            no1 = romanarr[i+1] - '0';
        }
        if(b == romanarr[i])
        {
            no2 = romanarr[i+1] - '0';
        }
    }
    if(no1 < no2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void findmax(char arr[])
{
    
    char max;
   
    max = arr[0];
    for(int i=1;arr[i] != '\0';i++)
    {
        if(compare(max,arr[i]))
        {
            max = arr[i];
            start_index = i;
        }

    }
}
void romantono()
{
    value = forincre(given_romanno[start_index]);
    for(int i=0;i<start_index;i++)
    {
      value =  fordecre(given_romanno[i]);
    }
    for(int i=start_index+1;given_romanno[i] != '\0';i++)
    {
      value =  forincre(given_romanno[i]);
    }
    printf("corresponding value :%d\n",value );
}
int main()
{
   printf("enter the Roman No: \n");
   scanf("%s",given_romanno);
   for(int i=0 ;given_romanno[i] != '\0' ;i++)
   {
     given_romanno[i]=toupper(given_romanno[i]);
   }
   findmax(given_romanno);
   romantono();
   return 0;
}
