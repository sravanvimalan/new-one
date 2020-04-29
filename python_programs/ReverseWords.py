/*
Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: "The cat in the hat"
Output: "ehT tac ni eht tah"
Note: In the string, each word is separated by single space and there will not be any extra space in the string.

input and output:

input :The cat in the hat
output : tah eht ni tac ehT

program:

*/



input = "The cat in the hat"
output = " "
len = len(input)
len = len-1
while(len >= 0):
  output = output + input[len]
  len = len-1
print("input :"+input)
print("output :"+output)
