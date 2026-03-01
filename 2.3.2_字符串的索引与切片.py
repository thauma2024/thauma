#索引 正序第一个是0，倒序(-)最后一个是-1
s = "HELLOWORLD"
print( s[0], s[-10] ) #表示同一个
print( "我真厉害啊"[4] )
print( '我真厉害啊'[-1] )

#切片 [a:b] 从a开始到b结束（不含b），【a，b）
#不写a/b默认从头/尾 开始/结束

print( s[2:8] )
print( s[-8:-2])
print( s[:5] )
print( s[5:] )

#字符串操作
a = "2026"
b = "健康快乐"
print( a+b )#相连接
print( a*5 )#*n 重复n次

#a in b, a在b中，真True，假False
print( '2' in a )#True
print( '3' in a )#False