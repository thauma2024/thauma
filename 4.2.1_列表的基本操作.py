#列表是序列的一种，可以存储任意个数，任意类型的元素

#列表的创建
list1 = [1, 'hello', 20.5]

list2 = list('helloworld') 
#['h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd']

list3 = list(range(1,10,2)) 
#[1, 3, 5, 7, 9]

print( list1 )
print( list2 )
print( list3 )

#序列与列表共通的操作
print(list1*3)
print(list2+list3)
print()

print(len(list1))
print(min(list3))
print(max(list3))

print()
print(list2.count('o'))
print(list2.index('e'))

print('*'*11)

#列表的删除
list4 = [1,7,9]
print(list4)

del list4 #删除list4
#print(list4)#这行会报错，找不到list4