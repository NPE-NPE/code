S = input()
N = len(S)
S1 = S[0:(N-1)//2]
S2 = S[(N+3)//2-1:N+1]
print("Yes" if S == S[::-1] and S1 == S1[::-1] and S2 == S2[::-1] else "No")

'''
#incorrect
S = input()
N = len(S)
a = (N-1)//2
if S == S[::-1] and S[:a] == S[::-a]
'''

