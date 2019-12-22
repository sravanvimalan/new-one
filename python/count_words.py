'''
intput and output:
Word count: 4
program:
'''
# consider the sentence
sentc = "India is my country."
sentc = sentc.strip() # remove the space from front and end except b/w
sentc = sentc.split(" ") # split the words basis of blank space
word_count = len(sentc); # take the count
print("Word count :",format(word_count))
