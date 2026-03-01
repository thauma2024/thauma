#不建议想6.1.6那样访问私有属性，更好的方法如下
class Student:

    def __init__(self,name,gender):
        self.name = name
        self.__gender = gender # 私有的实例属性
    
    #使用@property将方法转成属性使用
    @property
    def gender(self):
        return self.__gender
    
    #将gender设置为可写属性
    @gender.setter
    def gender(self,value):

        if value !='M' and value !='F':
            print('ERROR:DEFAULTED MODE_F')
            self.__gender = 'F'
        else:
            self.__gender = value
        return self.gender
    
stu = Student('xjy','F')
    
print(stu.gender) #可以访问了，无需（），自行执行方法stu.gender()

#尝试修改属性值
#stu.gender = 'M' 
#报错——不可修改 AttributeError: property 'gender' of 'Student' object has no setter

#gender.setter之后尝试修改
stu.gender = 'M'
print(stu.gender)

