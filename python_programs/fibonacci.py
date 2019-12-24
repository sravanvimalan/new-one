'''
input and output:
enter the number 10
34
program:
'''
# fibonacci series
                                              # using recursion


# lets write the function
def fib(num):
    if num == 1:
        return 0
    elif num == 2:
        return 1
    else:
        return fib(num-1) + fib(num-2)
# driver program
num = input("enter the number ")
print(fib(int(num)))
                                            #dynamic approach
                                            
# lets write the function
