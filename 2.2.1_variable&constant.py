luck_number = 6#整型
print( 'my lucky number is', luck_number )
print( 'Its type:', type(luck_number) )#<class 'int'>


#python动态修改变量的数据类型，通过赋不同的值就可以直接修改unlikeC
luck_number = '六'#字符串型
print( 'my lucky number is', luck_number )
print( 'Its type:', type(luck_number) )#<class 'str'>

#python中允许多个变量指向同一个值
num = no = 6
print( num, no )
print( id(num) )
print( id(no) )#指向同一个值的变量，地址相同

pi = 3.1415926 #变量，允许修改
PI = 3.1415926 #常量，不允许修改
