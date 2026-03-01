#相加
a = 'hello'
b = 'world'
print( a+b ) #helloworld

#相乘
print( '*'*11 )
print( a*11 )

print()

#判断操作

print( 'a in helloworld:', ('a' in a+b) )
print( 'o in helloworld:', ('o' in a+b) )

print( 'h not in hello:', ('h' not in a) )
print( 'c not in hello:', ('c' not in a))

print()

#内置函数

#长度
print( len(a) )

#最大值最小值（按照ASCII码来计算）
print( min(a) )
print( max(a) )

#序列对象的方法：使用序列名称，打点调用
print()

s = 'HelloWorld'
print( 'index of o:', s.index('o') )#查找第一个o的索引
print( 'count of o', s.count('o') )#计算索引里o的个数