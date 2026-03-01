#元组tuple是不可变序列
#元组元素之间用逗号，分割，只有一个元素也不能省略逗号，

#1.小括号创建
t = ('hello',[1,3,5,7],101)
print(t)

#2.内置函数tuple
t = tuple('helloworld')
print(t)

t = tuple([1,2,3,3,4,5])
print(t)

#元组是特殊的序列
print('2 in t', (2 in t))
print('9 not in t', (9 not in t))
print('max',max(t))
print('min',min(t))
print('len',len(t))
print('4 index', t.index(4))
print('3 count', t.count(3))

#若元组只有一个元素，逗号不能省略
t = (10)
print(type(t))#<class 'int'>

t = (10,)
print(type(t))#<class 'tuple'>

#删除元组
del t
#print(t) 报错，找不到t