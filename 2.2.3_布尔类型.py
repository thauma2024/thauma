a = True
b = False
print( a, b )
print( type(a) )
print( a + 19 ) #True 的值是1
print( b + 19 ) #False的值是2
print( '-' * 8 )
#布尔值 bool()
print( bool(19) ) #非零数字是True
print( bool(0), bool(0.0) ) #0数值（不管整还是浮点）都是False
print( bool('好的') ) #非空字符串是True
print( bool('') ) #空字符串是False

#空的都是False
print( bool(False) )
print( bool(None) )