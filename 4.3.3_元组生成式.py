t1 = (i for i in range(1,5))
print(t1) #此时打印出生成器对象

for item in t1:
    print(item)#生成器对象运作，打印出结果

print('*'*13)
t2 = (i for i in range(1,6) if i%2)
print(t2)
t2 = tuple(t2)#转化为元组之后，可以打印出结果
print(t2)

print('*'*13)
#__next__函数

t3 = (i for i in range(2,8) if not i%2)
print(t3.__next__())
print(t3.__next__())
print(t3.__next__())#将元组内生成器对象依次取出
print(tuple(t3)) #此时t3为空