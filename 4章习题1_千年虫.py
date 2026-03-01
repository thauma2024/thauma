#1.for
list = [88,89,90,98,00,99] #00 = 0
print(list)

for index in range(len(list)):
    if not str(list[index]) == '0':
        list[index] = '19'+ str(list[index])
    else:
        list[index] = '200'+ str(list[index])
print(list)

#2.enumerate
list = [88,89,90,98,00,99] #00 = 0

for index,value in enumerate(list):
    if not str(value) == '0':
        list[index] = '19'+str(value)
    else:
        list[index] = '200' +str(value)

print(list)
