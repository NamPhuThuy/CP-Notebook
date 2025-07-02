n = int(input())
a = [input().strip() for _ in range(n)]
a.sort()
for s in a:
    print(s)