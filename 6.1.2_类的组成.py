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
    
    #静态方法
    @staticmethod
    def sm():
        print('静态方法，不能调用实例属性和实例方法')
    
    #类方法
    @classmethod
    def cm(cls):
        print('类方法，不能调用实例属性和实例方法')

#想调用实例对象和实例方法，必须创建对象

stu = Student('xjy',18) # __init__里有两个参数（除去self）

#凡是实例，使用对象名
print(stu.name,stu.age) #实例对象
stu.show() #实例方法

#凡是类，使用类名
print( Student.school ) #类属性
Student.sm() #静态方法
Student.cm() #类方法



    
