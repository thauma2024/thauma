class Student:

    #类属性：定义在类中，方法外的变量
    school = 'szsy2uestc'

    #初始方法
    def __init__(self,name,age): 
    # name，age是方法参数，局部变量，作用域是整个__init__方法
        self.name = name
        self.age = age
        #左为实例属性，右为局部变量，将右赋值给左
        #实例名和局部变量名可以相同
    
    #方法是定义在类中的函数 
    def show(self):#自带一个参数self
        print(f"I'm {self.name},{self.age} years old")

stu1 = Student('xjy',18)
stu2 = Student('xb',5)

stu1.show()
stu2.show()

#动态绑定实例属性
stu2.gender = 'neutral'

print(stu2.name,stu2.age,stu2.gender)

#动态绑定方法

def intro():
    print("I'm a normal function, now I 马上要被动态绑定到stu1上了")

stu1.fun = intro #后不加小括号：有括号是调用，无括号是定义

stu1.fun()