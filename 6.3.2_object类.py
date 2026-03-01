#object类是所有类直接或间接的父类
#所有类都永远object类的属性和方法
#此文件介绍方法：__init__() & __str__()

class Person:
    def __init__(self,name,age):
        self.name = name 
        self.age = age

    def show(self):
        print(f"I'm {self.name}, {self.age} years old.")

    #重写__str__
    def __str__(self):
        return 'This is a human, name & age'

per = Person('xjy',18)

print(dir(per))

print(per) 
#未重写__str__时，返回 
# <__main__.Person object at 0x0000025E5D606310>

#重写后，返回 自定义字符串