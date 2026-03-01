s = 0

for i in range(1,10):
    
    s += i

    if s > 20:
        print( '累加和大于20的当前数是', i )
        break

print( '-'*7 )

i = 0

while i < 3:

    user_name = input( 'enter hour username' )
    pwd = input( 'enter your password' )

    if user_name == 'xjy' and pwd == '666666':
        print( 'username and password is matched, you login successfully' )
        break #break非正常结束，不执行else部分
    else:
        print( 'error, your still have', 2-i, 'chance(s)' )

    i += 1

if i == 3:
    print( 'failure, you are not allowed to login' )



print( '-'*7 )
#for 循环

for i in range(3):

    user_name = input( 'enter hour username' )
    pwd = input( 'enter your password' )

    if user_name == 'xjy' and pwd == '666666':
        print( 'username and password is matched, you login successfully' )
        break #break非正常结束，不执行else部分
    else:
        print( 'error, your still have', 2-i, 'chance(s)' )
else:
    print( 'failure, you are not allowed to login' )
