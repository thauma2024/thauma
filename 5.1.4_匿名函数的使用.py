#lambda 一句话函数
s = lambda a,b: a+b #把匿名函数储存在变量中
print(type(s))
print(s(10,20))
print()

list = [10,20,30,40]
for i in range(len(list)):
    s = lambda x: x[i] 
    print(s(list))
print()

student_score = [
    {'name':'x', 'score':66},
    {'name':'y', 'score':90},
    {'name':'a', 'score':77},
    {'name':'m', 'score':81}
]

#对字典进行排序，排序规则是按成绩从大到小
student_score.sort(key = lambda x:x.get('score'), reverse = True)
print(student_score)