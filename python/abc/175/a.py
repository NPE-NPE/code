s = input()
count = 0
for i in s:
    if i == 'R':
        count += 1
    elif i != 'R' and count == 0:
        continue
    else:
        break
print(count)

'''
#alternative solution
S = input()
print(S.count("R") if S.count("R") != 2 else 2 if S[1] == "R" else 1)#See separate sheet
'''
