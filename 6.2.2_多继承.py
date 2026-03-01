class MotherA:
    def __init__(self,name):
        self.name = name
    
    def showA(self):
        print('From MotherA, name = ', self.name)

class MotherB:
    def __init__(self,age):
        self.age = age
    
    def showB(self):
        print('From MotherB, age =',self.age)

#Daughter 继承 MotherA 和 MotherB

class Daughter(MotherA,MotherB):
    def __init__(self,name,age,gender):
        MotherA.__init__(self,name) #多继承时不再使用super()
        MotherB.__init__(self,age)
        self.gender = gender

xjy = Daughter('xjy',18,'F')
xjy.showA()
xjy.showB()


