S = input()
print("Cloudy" if S == "Sunny" else "Rainy" if S == "Cloudy" else "Sunny")

'''
#alternative solution
weather = ["Sunny", "Cloudy", "Rainy"]
S = input()
print(weather[(weather.index(S)+1) % 3])
'''
