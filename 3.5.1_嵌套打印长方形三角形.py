#长方形
for i in range(1,6):
    for k in range(1,5):
        print( '*', end = '' )
    print()

#三角形
for i in range(1,10):
    for k in range(1,i):
        print( '*', end = '' )
    print()

#等腰三角形
for i in range(1,6):
    for j in range(1,6-i):
        print( ' ', end = '' )
    for k in range(1,i*2):
        print( '*', end = '' )

    print()