i = 0

while i < 3:

    user_name = input( 'enter hour username' )
    pwd = input( 'enter your password' )

    if user_name == 'xjy' and pwd == '666666':
        print( 'username and password is matched, you login successfully' )
        break
    elif  i == 1:
        print( 'error, your still have', 2, 'chances' )
    elif i == 2:
        print( 'error, your have one last chance' )

    i += 1

if i == 3:
    print( 'failure, you are not allowed to login' )