#用索引去访问元组元素
t = ('python','hello','world')
print(t[0])
#元组可以切片
t2 = t[0:3:2]
print(t2)

#元组遍历

#1.for循环

for item in t:
    print(item)
print()

for i in range(len(t)):
    print(i,'---->',t[i])
print()

#2.enumerate
for index,item in enumerate(t,start = 1):
    print(index,'---->',item)