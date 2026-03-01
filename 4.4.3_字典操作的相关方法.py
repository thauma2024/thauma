d = {1001:'a',1002:'b',1003:'c'}
print(d)
#向字典添加元素 d[key]=value
d[1004]='d'

print(d)
print()

#获取全部key
keys = d.keys()
print(keys)#dict_keys()
print(list(keys)) #[]
print(tuple(keys)) #()

#获取全部value
values = d.values()
print(values)#dict_values()
print(list(values))
print(tuple(values))
print()

#获取键值对，并转化成列表
list = list(d.items())
print(list) #[(,),]

#可逆过程
d = dict(list)
print(d)#{:,}

print('*'*14)

#pop函数
#根据key取出键值对，输出value之后，删除
print(d.pop(1003)) #c
print(d) #字典删去了 1003:c

#pop函数默认值
print(d.pop(1005,'nonexist'))#不存在key是1005，返回默认值nonexist
print()

#popitem函数，随机删除一个键值对
print(d.popitem())
print(d)
print()

#clear函数，清空字典
d.clear()
print(d)

#空字典的布尔值是False
print(bool(d))