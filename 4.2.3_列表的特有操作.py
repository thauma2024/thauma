list1 = ['hello','world','python']
print('original list:', list1, id(list1))
#id(list1)是list1的内存地址，对list1的操作不会改变其内存地址

#向列表末尾追加元素
list1.append(100)
print('list appended:',list1, id(list1))

#向列表第（index）处添加一个元素
list1.insert(2,'xjy')
print('list inserted(2,''xjy''):',list1,id(list1))

#删除列表中的元素
list1.remove(100)
print('list removed:',list1,id(list1))

#将列表中第（index）个元素取出，删除
list1.pop(2)
print('list popped:',list1,id(list1))

#在原列表的基础上反向，不会生成新列表
list1.reverse() #没有返回值
print('list reversed:',list1,id(list1))

#拷贝list1中所有元素，生成一个新列表
list2 = list1.copy()
print('list2:',list2,id(list2))
#注意此时list2的地址有所不同

#清除list2
list2.clear()
print('list2 cleared:',list2,id(list2))

print('*'*14)
#对列表的修改操作
#对列表元素根据索引进行修改

print('list1 before:',list1)
list1[1] = 'sql'
print('list1 after:',list1)