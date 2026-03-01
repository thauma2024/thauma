answer = input( 'Drink? Y/N' )

if answer == 'Y':
    proof = eval(input('How much:'))
    if proof<20:
        print('不构成酒驾')
    else:
        print( 'Go to jail')
else:
    print( 'bye' )

if proof == 100 and answer == 'Y': #用and或者or，都可以多条件
    print('Genius')