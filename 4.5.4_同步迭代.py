fruits = ['apple','orange','peach'] #必须是列表，集合是无序的无法同步
count = [1,2,3,4]

for f,c in zip(fruits,count):
    match f,c:
        case 'apple',1:
            print('1 apple')
        case 'orange',2:
            print('2 oranges')
        case 'peach',3:
            print('3 peaches')