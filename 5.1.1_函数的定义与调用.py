def get_sum(num):

    sum = 0
    for i in range(1,num+1):
        sum += i

    print(f'1到{num}之间的累加和为：{sum}')#f'{a}',a为变量，可以直接调用

get_sum(10)
get_sum(100)
get_sum(1000)