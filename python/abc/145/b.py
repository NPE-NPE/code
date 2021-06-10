N = int(input())
S = input()
print("Yes" if S[:N//2] == S[N//2:] else "No")

'''
#incorrect
N = int(input())
S = input()
print("Yes" if len(S) >= 2 and S.count(S[:int(N//2)]) == 2 else "No")
'''
