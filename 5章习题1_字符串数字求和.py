def get_sum(x):
    s = 0
    lst = []

    for item in x:
        if item.isdigit():
            lst.append(int(item))
    
    s = sum(lst)

    return lst,s

str = input('Enter a string:')

lst,sum = get_sum(str)

print('提取字符串数字：',lst)
print('累加和为：',sum)