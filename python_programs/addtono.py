'''
input and output:
enter the first number 10.2
enter the second number 30
The sum of 10.2 and 30 is 40.2
program:
'''
# add two numbers
num1 = input("enter the first number ")
num2 = input("enter the second number ") # input taken as string.

add = float(num1) + float(num2) # user enter float value .

print("The sum of {0} and {1} is {2}".format(num1 ,num2, add))
