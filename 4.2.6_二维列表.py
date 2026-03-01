list = [
    ['北京',101,102],#不要忘记每行后有一个逗号，
    ['上海',280,100],
    ['深圳',300,412],
]
print(list)

#遍历二维列表
for row in list:#行
    for item in row:#列
        print(item, end ='\t\t')
    print()

#二维列表生成式
list2 = [ (j for j in range(5)) for i in range(4)]
#括号--》生成器，直接打印list会打印出生成器对象（果树），只有遍历打印才能打印出值（苹果）
print(list2)
list3 = [ [j for j in range(5)] for i in range(4)]
#用方框（生成式）可以直接打印
print(list3)

for row in list3:#行
    for item in row:#列
        print(item, end ='\t\t')
    print()