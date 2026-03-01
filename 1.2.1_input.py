#variable = input( 'prompt' )
name = input( "please enter your name" )
print( "your name is" + name )#input函数默认将输入结果以字符串形式存储

age = input( "please enter your age" )
print( "your age is" + age )#成功连接，说明age此时是字符串类型
age = int(age)#用内置int函数转化
print( "your age is", age )#只能用，（分隔符）连接且输出有空格，说明不是字符串类型