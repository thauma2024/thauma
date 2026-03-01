#while
i = 0
s = 0
while i < 101:

    if i%2:
        i += 1
        s += i
        continue
    else:
        i += 1
print( '1-100奇数和为', s )


print( '-'*11 )
#for循环

for i in range(100):

    if i%2:
        s += i
        i += 1
        continue

print( '1-100奇数和为', s )