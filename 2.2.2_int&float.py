#int
num1 = 987
num2 = 0b1010101 #85
num3 = 0o765 #501
num4 = 0x87ABF #555711
print( num1 )
print( num2 )
print( num3 )
print( num4 )

#float
num5 = 10
num6 = 10.0
print( num5, "type:", type(num5) )
print( num6, "type:", type(num6) )

print( 0.1 + 0.2 ) #两个浮点数相加，末尾有概率出现奇怪数字 eg： 0.300000000004
print( round(0.1+0.2, 1) ) #如何避免呢？ round( 数字,保留小数 )

#复数(j = 根号下-1)
x = 4567 + 1234j
#.real .imag
print( "实部", x.real )
print( "虚部", x.imag )