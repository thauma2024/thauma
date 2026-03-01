list = ['hello','world','python']

#1.for循环
for item in list:
    print(item)

print()

#2.for +len()循环
for i in range(0,len(list)):
    print( str(i)+'--->'+list[i] )
print()

#3.enumerate(list,start=1),枚举list中的元素，起始索引为1
for index,item in enumerate(list,1):
    print(index,item)