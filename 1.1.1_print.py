#print( value, ..., sep = ' ', end = '\n', file = None )

a = 5
b = 10
print( a + b )
print( a * b )

print( "b" )
print( 'b' )
print( """b""")
print( '''b''' ) 

print( ord("b") )#在ASCII表里检索b，输出对应序号
print( chr(98) )#将98转化为ASCII表里对应序号的字符

print( ord(')') )#符号也ok
print( chr(41) )

print( ord("深") )#汉字的话，是在Unicode表中检索
print( chr(28145) )

print( "深圳我想你" )
print( a, b, "深圳我想你" )#逗号隔开的话，输出带空格

#修改print结束符（默认\n）
print( "深圳我想你", end = '-->' )
print( "成都好寒冷" )

#整行输出，使用+
print( "深圳我想你"+"来自阴暗潮湿的成都"+"2026" )#注意必须是字符串+字符串，都有引号