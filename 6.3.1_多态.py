#只关注行为，不关注路径
#在程序运行过程中，动态地决定调用哪个方法
class Person:
    def eat(self):
        print('人吃饭')

class Cat:
    def eat(self):
        print('猫吃肉肉')

class Dog:
    def eat(self):
        print('狗吃骨头')

#以上三个类有同名方法eat

def func(obj): # 多态：未知obj类型，都可调用方法eat
    obj.eat()

per = Person()
cat = Cat()
dog = Dog()

func(per)
func(cat)
func(dog)