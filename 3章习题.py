#判断闰年


#while True:
year = eval(input('enter a year:'))

if year%4 == 0 and year%100 or year%400 == 0:
    print( year, 'is 闰年' )
else:
    print( year, '不是闰年' )


print( '*'*11 )

#九九乘法表
for i in range(1,10):
    for j in range(1,i+1):
        print( str(i)+'*'+str(j)+'='+str(i*j), end = '\t')
    print()

print( '*'*11 ) 
#猜数字
import random

count = 0
num = random.randint(1,100)
while count <= 10:
    guess = eval(input('enter a number to guess(1,100):'))
    count += 1
    if guess < num:
        print( 'too small' )
    elif guess > num:
        print( 'too large' )
    else:
        print( 'Bingo! you have guessed '+ str(count)+' times' )
        break
else:
    print( 'sorry, all failed' )
