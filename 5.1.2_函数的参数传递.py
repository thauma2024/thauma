def happy_bir(age,name):
    print('祝'+name+str(age)+'岁生日快乐')

#位置传参，一一对应，不可调换

happy_bir(18,'xjy')

#关键字传参

happy_bir(name = 'xjy', age = 18)

#位置与关键字混合传参

# happy_bir('xjy',age = 18) 也报错

# happy_bir(name = 'xjy', 18) 
#SyntaxError: positional argument follows keyword argument
#必须关键字传参在后

happy_bir(18, name = 'xjy')
print()

#默认值参数
def happy_death(age = 18, name = 'NOBODY'):
    print(f'祝{name}{age}岁安息')

happy_death() #不调用参数
happy_death('NB') # 位置传参，随机传给一个
happy_death(name = 'NBD')
print()
#位置传参和默认值传参同时存在时，默认值传参在后
def fun(a,b=20):
    pass

#可变参数

#个数可变的位置参数
def traverse(*para):#前面加*
    print(type(para))
    for item in para:
        print(item)

    print()

traverse(10,20,30,40)
traverse(10)
traverse([10,20,30,40])#整体作为一个元组元素
traverse(*[10,20,30,40])#前面加*，解包列表

print()
#个数可变的关键字参数
def traverse2(**kwpara):
    print(type(kwpara))
    for key,value in kwpara.items():
        print(key,'--->',value)
    print()

traverse2(name = 'xjy',age = 18,height =160)

#用字典完成关键字传参
d = {'name':'xxx', 'age':19,'height':185}
traverse2(**d)#解包两次
