c = int(input())
for i in range(c):
    a, b = map(int, input().split())
    print(pow(a, b)%10)