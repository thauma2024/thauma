dict_train = {
    'G111':['a-b','18:00','20:00'],
    'G222':['a-c','14:30','16:00'],
    'G333':['c-b','08:00','09:00']
}
s = '车站'+'   '+'起始 '+' 发车时间 '+' 到达时间'

print(s)

for key in dict_train.keys():
    print(key,end = '\t')
    for i in dict_train[key]:
        print(i,end = '\t')
    print()

trainnum = input('Enter your purchase:')

info = dict_train.get(trainnum,'Nonexist')

if info != 'Nonexist':
    passengers = input('Enter the passengers:')

    print('Tickets brought:'+str(trainnum)+info[0]+' '+info[1]+'to'+info[2])
else:
    print('trainnum not found')

