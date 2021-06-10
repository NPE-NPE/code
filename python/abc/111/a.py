n = input()
print(n.replace("1", "x").replace("9", "1").replace("x", "9"))

'''
#incorrect
n = input()
for i in n:
    if i == '1':
        i == '9'
    elif i != '1':
        i == '1'
print(n)
'''
