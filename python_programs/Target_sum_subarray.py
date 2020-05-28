```
output:
[ 5 7 2 ]
program:
```



list = [1, 3, 2, 5, 7, 2]
result_sum = 0
target_sum = 14
start = 0
for i in range(len(list)) :
        while(result_sum >= target_sum):
            result_sum=result_sum-list[start]
            start=start+1
        result_sum=result_sum+list[i]
if result_sum == target_sum:
    print("[",end=' ')
    for i in range(start,len(list)):
        print(list[i],end=' ')
    print("]")




