s = 'helloworld'

for i in range(0,len(s)):
    print( i, s[i], end = '\t\t')

print()

for i in range(-10,-1):
    print( i, s[i], end = '\t\t' )

print( '*'*11 )

#切片
#[a:b:c] a开始位置(默认0)  b结束位置（默认结尾） c步长（默认为1）

'''
  0  1  2  3  4  5  6  7  8  9
  H  e  l  l  o  W  o  r  l  d
-10 -9 -8 -7 -6 -5 -4 -3 -2 -1
'''

m = 'HelloWorld'

print(m[0:5:2]) #Hlo 0 2 4

print(m[:5:2])#省略a Hlo 0 2 4

print(m[5::2])#省略b Wrd 5 7 9

print(m[:5])#省略ac Hello 0 1 2 3 4

print(m[::2])#省略ab Hlool 0 2 4 6 8

print(m[5:])#省略bc World 5 6 7 8 9


#倒序 c为负数
print(m[::-1])#dlroWolleH
print(m[-1:-10:-1])#dlroWolle
print(m[::-2])#drWle 9 7 5 3 1


