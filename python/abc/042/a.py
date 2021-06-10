array = list(map(int, input().split()))
print("YES" if array.count(5) == 2 and array.count(7) == 1 else "NO")
