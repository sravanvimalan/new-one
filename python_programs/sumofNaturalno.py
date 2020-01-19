'''
input and output;
enter the limit5
The sum :  15
program:
'''
# sum of the N natural numbers
num = int(input("enter the limit"))
i = 1
sum = 0
if(num  < 0):
    print("error")
else:
    while(i<=num):
            sum+=i
            i+=1

print("The sum : ",sum)
