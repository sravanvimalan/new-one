/*
Given the participants' score sheet for your University Sports Day, you are required to find the runner-up score. You are given  scores.
Store them in a list and find the score of the runner-up.

input and output
enter the scores: 2 3 6 6 5
5

program:
*/
x = input("enter the scores: ")
x = x.split()
x = list(set(x))  #set has has no duplicate elements
x.remove(max(x))
print (max(x))
