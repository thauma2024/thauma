#int -> float
print( "\nint -> float" )
print( float(18) )

#float -> int，只保留整数部分，不四舍五入
print( '\nfloat -> int' )
print( int(3.14) )
print( int(3.9) )
print( int(-3.14) )
print( int(-3.9) )

#str -> int
print( '\nstr -> int' )
print( int('14') )

#报错情况：14a，3.14，啊 ——因为不是整数

#str -> float, 报错情况类似int
print( '\nstr -> float')
print( float('17') )

#(chr()) & ord() 互逆操作
print('\n')
print( ord('许') ) #查找许在unicode表中的索引号_是35768
print( (chr(35768)))

#十进制与其他进制间的转换，结果是字符串类型
print( '\n' )
print( '10->16', hex(26472) )
print( '10->8 ', oct(26472) )
print( '10->2 ', bin(26472) )



