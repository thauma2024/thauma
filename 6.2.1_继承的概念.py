class Person:
    def __init__(self,name,age):
        self.name = name 
        self.age = age

    def show(self):
        print(f"I'm {self.name}, {self.age} years old.")

#Student类继承Person类
class Student(Person):

    def __init__(self,name,age,stuno):
        super().__init__(name,age) #调用父类的初始方法
        self.stuno = stuno

#Doctor继承Person
class Doctor(Person):

    def __init__(self,name,age,department):
        super().__init__(name,age)
        self.department = department


#创建第一个子类对象
stu = Student('xjy',18,2025190904011)
stu.show()

doctor = Doctor('nn',23,'surgery')
doctor.show()