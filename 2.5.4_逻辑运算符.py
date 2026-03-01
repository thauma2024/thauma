#和C语言是一样的 and = &&, or = //, not = ~，熟悉一下表达就好了
print( True and False ) #F
print( 9<8 and 10/0 ) #and 和 or的运算顺序是从左至右，所以发现9<8错的时候就不再计算右侧了

print( not False )
print( not (9>8) )