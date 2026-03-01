s = {10,20,30,40}

#添加元素100
s.add(100)
print(s)

#删除元素20
s.remove(20)
print(s)

#清除所有元素
#s.clear()
#print(s)

print()
#集合的遍历
#1.for
for item in s:
    print(item)

#2.enumerate
for index,item in enumerate(s,1):
    print(index,'--->',item)

#集合生成式
s = { i for i in range(1,10) if not i%2}
print(s)