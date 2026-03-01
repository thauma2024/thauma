list1 = [1,43,17,55,90,28]

print(list1)

#正序排序
list1.sort()
print(list1)

#倒序排序(reverse默认为False，正序排序，修改为True时为倒序)
list1.sort(reverse = True)
print(list1)


list2 = [ 'Cat', 'dog', 'Banana', 'apple']

#英文单词也可以排序，按照ASCII码
list2.sort()
print(list2)
list2.sort(reverse = True)
print(list2)

#忽略大小写进行比较（都转成小写比较，但是不改变列表元素)
list2.sort(key = str.lower)
print(list2)

print('*'*14)

#使用内置函数sorted来比较,默认升序
#sorted函数会产生一个新的列表,而不会改变原列表
asc_list = sorted(list1)
print(list1)
print(asc_list)

desc_list = sorted(list1,reverse = True)#倒序排序方法一样
print(desc_list)


list3 = sorted(list2)
print(list2)
print(list3)

list4 = sorted(list2,key = str.lower)
print(list4)