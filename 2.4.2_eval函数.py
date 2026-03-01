#作用是去掉字符串两侧的引号，执行内部运算
s = "3+4"
print( s, type(s))
print( eval(s), type(eval(s)) )

print( '\n' )
age = eval(input('Enter your age:')) #与input函数搭配使用，将字符串类型转为int类型
print( age, type(age) )

height = eval(input('Enter your height:')) #转为float类型
print( height, type(height) )

print( '\n' )
s = '北京欢迎你'
print( eval('s') ) #'s'去掉''是s
#eval(s)/eval('北京欢迎你')会报错，因为是未定义变量