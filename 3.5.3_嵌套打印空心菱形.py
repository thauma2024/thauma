row = eval(input('enter the row:'))

'''
eg:row = 7
&&&*
&&*&*
&*&&&*
*&&&&&*
&*&&&*
&&*&*
&&&*
'''
while not row%2:
    row = eval(input('please enter an odd num:'))

for i in range(1,row//2+1): #python中，/除法得到的永远是浮点数，不能进入range
    for j in range(1,row//2-i+2):
        print( ' ', end='' )
    for k in range(1,i*2):
        if k == 1 or k == i*2-1:        
            print( '*', end = '' )
        else:
            print( ' ', end = '' )
    print()

for i in range(1,row//2+2):
    for j in range(1,i):
        print( ' ', end='' )
    for k in range(1,(row//2+2-i)*2):
        if k == 1 or k == (row//2+2-i)*2-1:        
            print( '*', end = '' )
        else:
            print( ' ', end = '' )
    print()