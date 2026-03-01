class Student():

    def __init__(self,name,age,gender):
        self._name = name #_ 受保护的，仅本类和子类访问
        self.__age = age #__ 私有的，仅本类访问
        self.gender = gender #普通的实例属性，类的内部、外部和子类都可以访问

    def _fun1(self):
        print('仅子类及本身可以访问')

    def __fun2(self):
        print('只有定义的类可以访问')

    def show(self):
        print('普通的实例方法')
        self._fun1() #类本身访问受保护方法
        self.__fun2() #类本身访问私有方法
        print(self._name) #受保护实例属性
        print(self.__age) #私有的实例属性


stu = Student('xjy',18,'F')

print(stu._name)
# print(stu.__age) #AttributeError: 'Student' object has no attribute '__age'. 

stu._fun1()
#stu.__fun2() #AttributeError: 'Student' object has no attribute '__fun2'.

#访问私有的实例和方法
print(stu._Student__age)
stu._Student__fun2() 

print(dir(stu)) #可以看到在类中，私有/受保护的，前缀为_Student
    