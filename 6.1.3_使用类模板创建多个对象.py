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
stu3 = Student('mm',11)
stu4 = Student('yb',8)

lst = [stu1, stu2, stu3, stu4]

print(type(stu1))

Student.school = 'Earth'

for item in lst:
    item.show()