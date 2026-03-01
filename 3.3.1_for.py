#字符串
for i in 'hello':
    print( i )

#判断
for i in range(1,10): #[1,10)
    if i%2 :
        print( i, '是奇数' )
    else:
        print( i, '是偶数' )

#判断案例-水仙花数
#eg: 153 = 1**3 + 5**3 + 3**3
for i in range(100,1000):

    a = i%10 #个位数
    b = i//10%10 #十位数
    c = i//100 #百位数

    if i == a**3 + b**3 + c**3:
        print(i)


#for else

s = 0#存储累加和

for i in range(1,101):
    s += i 
else: #for 循环正常结束，没有遇到break ->执行else部分
    print( '1-100的累加和是', s )