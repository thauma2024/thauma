#for
import random
d = {i:random.randint(1,100) for i in range(4)}
print(d)

#zip映射
list1 = [1,2,3,4]
list2 = ['a','b','c','d']
d = {key:value for key,value in zip(list1,list2)}
print(d)