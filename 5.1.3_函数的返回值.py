#没有返回值的函数，类型是NoneType
#单个返回值
def calc1(a,b):
    return a+b

print(calc1(1,2))
print(calc1(calc1(1,2),3))

print('*'*11)
#多个返回值
def calc2(num):
    sum = 0
    odd_sum = 0
    even_sum = 0

    for i in range(num+1):
        sum += i
        if i%2:
            odd_sum += i
        else:
            even_sum += i

    return sum, odd_sum, even_sum
    
result = calc2(100) #储存在元组里
print(type(result), result)

a,b,c = calc2(100) # 解包赋值
print(a,b,c)