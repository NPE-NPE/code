N = input()
book = ["pon", "pon", "hon", "bon", "hon", "hon", "pon", "hon", "pon", "hon"]
print(book[int(N[-1])])

'''
#incorrect
N = input()
if N[-1] == '3':
    print("bon")
elif N[-1] == '0' or '1' or '6' or '8':
    print("pon")
elif N[-1] == '2' or '4' or '5' or '7' or '9':
    print("hon")
