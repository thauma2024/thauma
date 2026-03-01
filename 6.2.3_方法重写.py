#Copy 6.2.1
class Person:
    def __init__(self,name,age):
        self.name = name 
        self.age = age

    def show(self):
        print(f"I'm {self.name}, {self.age} years old.")


class Student(Person):

    def __init__(self,name,age,stuno):
        super().__init__(name,age)
        self.stuno = stuno

    #方法重写
    def show(self):
        super().show() # 继承父类的show方法
        print('My studentID is:', self.stuno)


class Doctor(Person):

    def __init__(self,name,age,department):
        super().__init__(name,age)
        self.department = department

    def show(self):
        print(f"I'm {self.name}, {self.age} years old, working in {self.department}")

#同名方法，先调用子类，没有，再调用父类

stu = Student('xjy',18,2025190904011)
stu.show() #调用父类方法--重写版

doctor = Doctor('nn',23,'surgery')
doctor.show() #调用自己方法