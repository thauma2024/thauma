#{不可变数据类型}直接创建集合
s1 = {1,2,3,4}
print(s1)

#list,dic是可变数据类型，不能作为集合元素

#set函数创建空集合
s2 = set()
print(s2)
print()

#? 直接用{}创建的是集合还是字典呢？
s3 = {}
print(s3,type(s3)) #{} <class 'dict'> 字典
print()

#字符串转集合
s2 = set('helloworld') 
print(s2) #两个o合成一个--->集合元素无序且独特
print()

#列表转集合
s3 = set([1,2,3,4,5])
print(s3)
print()

s4 = set(range(1,10))
print(s4) #{1,2,3,4,5,6,7,8,9}

#集合是序列的一种
print('max',max(s4))
print('min',min(s4))
print('len',len(s4))

print('9 in s4',(9 in s4))
print('1 not in s4', (1 not in s4))

del s4