d = {'hello':10,'world':20,'python':30}
print(d,end = '\n\n')

#访问字典元素
#1.d[key]
print(d['hello'])
#缺点：没有默认值，一旦key不存在，就报错
#e.g.print(d['java'])

#2.d.get(key)
print(d.get('hello'))
print(d.get('java')) #有默认值，未找到--->None

#d.get(key,default)可指定默认值
print(d.get('java','不存在'))#--->不存在
print()

#字典元素的遍历
#d.items()返回字典中所有键值对信息

#1.item

for item in d.items():
    print(item) #一个键值对是一个元组

#2.分别获取key value

for key,value in d.items():
    print(key,':',value)
