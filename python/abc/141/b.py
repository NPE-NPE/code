S = input()
print("No" if "L" in S[::2] or "R" in S[1::2] else "Yes")

'''
#incorrect
S = input()
print("Yes" if S[::2] == "R" or "U" or "D" and S[1::2] == "L" or "U" or "D" else "No")
;;;
