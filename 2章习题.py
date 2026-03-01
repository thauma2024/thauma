#1
value = eval(input( 'Enter an integer:'))

a = value//1000 #round(a/b) = a//b
b = value//100%10
c = value//10%10
d = value%10

print( a, b, c, d )

#2
value2 = input('Enter an integer:')

print( value2[0], value2[1], value2[2], value2[3] )