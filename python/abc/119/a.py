#correct
S = input()
print("Heisei" if S <= "2019/04/30" else "TBD")

'''
#incorrect
S = input()
print("Heisei" if S[0:3] <= "2019" and S[5:6] <= "04" else "TBD")

'''
