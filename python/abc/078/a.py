A, B = input().split()
if A < B:
    print("<")
elif A > B:
    print(">")
else:
    print("=")

'''
#alternative solution
X, Y = input().split()
print("<" if X < Y else "=" if X == Y else ">")
'''
