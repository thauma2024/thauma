#基本与C语言一样
a = 10
b = 3

a /= b
print( a, type(a) ) #进行了隐式转换

c = 10
c //= b #整除赋值
print( c, type(c) )

c **= 2
print( c )

#链式赋值
a = b = c = 100
print( a, b, c )

#解包赋值
a, b = 20, 50 # a = 20, b = 50
print( a, b )

#用解包赋值交换值
a, b = b, a 
print( a, b )