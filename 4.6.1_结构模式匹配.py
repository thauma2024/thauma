data = eval(input('Enter:'))

match data:
    case {1:2,3:4}:
        print('字典')
    case [1,2,3]:
        print('列表')
    case (1,2,3):
        print('元组')
    case _:
        print('Else')