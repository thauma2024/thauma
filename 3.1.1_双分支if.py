#整数
n = eval( input( 'Enter an integer:') )

if n%2 :
    print( n, 'odd' )
else :
    print( n, 'even' )


#字符串
m = input( 'Enter a string:' )

if not m:
    print( '空' )
else:
    print( '非空' )

#布尔值
p = eval(input('True or False'))

if p:
    print( 'True' )
else:
    print( 'False' )

