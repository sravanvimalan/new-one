# enter the time in HH:MM:SS format 12:12:12
# twelve hour twelve minutes twelve seconds
# program:

def display(n):
    if (n > 20):
        tens = int(n) / int(10);
        tens = int(tens) * 10;
        return  tens
    else:
        return n
if __name__=="__main__":
    dict={
        0:"zero" ,
        1:"one" ,
        2:"two" ,
        3:"three" ,
        4:"four" ,
        5:"five" ,
        6:"six" ,
        7:"seven" ,
        8:"eight" ,
        9:"nine" ,
        10:"ten" ,
        11:"eleven" ,
        12:"twelve" ,
        13:"thirteen" ,
        14:"fourteen" ,
        15:"fifteen" ,
        16:"sixteen" ,
        17:"seventeen" ,
        18:"eighteen" ,
        19:"nineteen" ,
        20:"twenty" ,
        30:"thirty" ,
        40:"forty" ,
        50:"fifty" ,
        60:"sixty"
    }
    time=list(input("enter the time in HH:MM:SS format ").strip().split(':'))
    hour=int(time[0])
    minute=int(time[1])
    seconds=int(time[2])
    ten_s = display(seconds)
    one_s = seconds % 10
    if (minute == 0):
         print(dict[hour], "o' clock")
         print(dict[ten_s],dict[one_s],"seconds")

    else:
         ten_m = display(minute)
         one_m = minute % 10
         if(minute>20 and seconds>20):
             print(dict[hour], "hour", dict[ten_m], dict[one_m], "minutes",dict[ten_s],dict[one_s],"seconds")
         elif (minute<20 and seconds>20):
             print(dict[hour], "hour", dict[ten_m], "minutes", dict[ten_s], dict[one_s], "seconds")
         elif (minute>20 and seconds<20):
             print(dict[hour], "hour", dict[ten_m], dict[one_m], "minute", dict[ten_s], "seconds")
         else:
             print(dict[hour], "hour", dict[ten_m], "minutes", dict[ten_s], "seconds")
