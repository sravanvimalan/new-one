/*
assembly code generation
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isp(char item);
void output(char item);
void push(char item);
char pop(void);
char exp[20];
char res[20];
char a[20];
int st[20], value[20];
int top=0,z=0,i=0,op1,op2,l,t,s;
int pc=0x5000;
char x,item;
void main()
{
printf("Enter the infix expression: ");
scanf("%s",exp);
l=strlen(exp);
push('#');
while((item=exp[i])!='\0')
{
if(isalpha(exp[i]))
output(item);
else if(item=='+'||item=='*'||item=='-'||item=='/'||item=='^')
push(item);
else if(item=='(')
push(item);
else if(item==')')
{
while((x=pop())!='(')
output(x);
}
else if(isp(x=pop())<isp(item))
{
push(x);
push(item);
}
else
{
output(x);
push(item);
}
i++;
}
while((x=pop())!='#')
output(x);
printf("Postfix expression: ");
puts(res);
printf("8085 Code Generation:\n");
for(i=0;i<l;i++)
{
if(isalpha(res[i]))
{
printf("%x MVI A,%c\n",pc,res[i]);
pc=pc+2;
printf("%x PUSH A\n",pc);
pc=pc+1;
}
else
{
printf("%x POP B\n",pc);
pc=pc+1;
printf("%x POP A\n",pc);
pc=pc+1;
if(res[i]=='+')
{
printf("%x ADD B\n",pc);
pc=pc+1;
printf("%x PUSH B\n",pc);
pc=pc+1;
}
else if(res[i]=='-')
{
printf("%x SUB B\n",pc);
pc=pc+1;
printf("%x PUSH B\n",pc);
pc=pc+1;
}
else if(res[i]=='*')
{
printf("%x MOV C,A\n",pc);
pc=pc+1; 
printf("%x MVI A,00\n",pc);
pc=pc+2;
t=pc;
printf("%x ADD B\n",pc);
pc=pc+1;
printf("%x DCR C\n",pc);
pc=pc+1;
printf("%x JNZ %x\n",pc,t);
pc=pc+3;
printf("%x PUSH A\n",pc);
pc=pc+1;
}
else if(res[i]=='/')
{
printf("%x MVI C,00\n",pc);
pc=pc+2;
printf("%x INR C\n",pc);
s=pc;
pc=pc+1;
printf("%x SUB B\n",pc);
pc=pc+1;
printf("%x JP %x\n",pc,s);
pc=pc+3;
printf("%x MOV C,A\n",pc);
pc=pc+1;
printf("%x PUSH A\n",pc);
pc=pc+1;
}
else
{
printf("Invalid operator!!!\n");
}
}
}
}
int isp(char item)
{
if((item=='+')||(item=='-'))
return(1);
else if((item=='*')||(item=='/'))
return(2);
else if((item=='^'))
return(3);
else
return(0); 
}
void output(char item)
{
res[z++]=item;
}
void push(char item)
{
a[++top]=item;
}
char pop(void)
{
item=a[top--];
return(item);
}
