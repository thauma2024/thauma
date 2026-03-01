#列表生成式
#list = [expression for item in range(a,b)]
#list = [expression for item in range(a,b) if condition]
import random

list1 = [ item for item in range(1,10)]
print(list1)
list2 = [ item*item for item in range(1,10)]
print(list2)

#随机产生十个在1-99之间的整数
list3 = [ random.randint(1,100) for i in range(10)]
print(list3)

#1-10内的偶数
list4 = [ i for i in range(10) if not i%2 ]
print(list4)