#1.花括号创建{key:value} 
#key不可变(字符串，数字，元组)
d = {10:'cat',20:'dog',30:'bird',20:'zoo'}
print(d) #key相同时，后面value覆盖前面
print()

#2.zip映射
list1 = [10,20,30,40]
list2 = ['cat','dog','bird','zoo','br0']#多余部分会被忽略，不进入字典，也不报错
zipobj = zip(list1,list2)
print(zipobj) #zip对象无法直接查看
#print(list(zipobj)) #转成列表可以查看，键值对变成元组
#[(10, 'cat'), (20, 'dog'), (30, 'bird'), (40, 'zoo')]
#不能再转成其他格式了 e.g.print(tuple(zipobj) or dict(zipobj)) --->() or {} 空的

print(dict(zipobj))
#{10: 'cat', 20: 'dog', 30: 'bird', 40: 'zoo'}
print()

#3.使用参数创建字典(key = value)
d = dict(cat = 10,dog = 20)
print(d)
print()

t = (10,20,30)#元组是不可变序列，可以作为键
# d = dict(t = 'white')
# print(d,end = '\n\n')
#--->{'t'='white'}

print({t:'white'})

# list3 = [10,20,30]
# print({list3:'abc'}) 报错

#字典属于序列
print('\n',d)
print('max',max(d))#比较ASCII码
print('min',min(d))
print('len',len(d))

del d

#注意！python中key实质是无序的，只是在3.6版本后对输出器进行处理，使输出的与添加顺序一致
