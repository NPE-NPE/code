X = input()
alpha = ["A", "B", "C", "D", "E"] 
for i in alpha:
    if i == X:
        print(1+alpha.index(i))

'''
#alternative solution
X = input()
print(["A", "B", "C", "D", "E"].index(X)+1)
'''
