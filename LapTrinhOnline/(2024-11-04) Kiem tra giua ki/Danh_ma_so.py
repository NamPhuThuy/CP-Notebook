part1 = []
part2 = []
n = 0
vis = [False] * 10

def backtrack1(s):
    if len(s) == n:
        part1.append(s)
        return
    for i in range(n):
        if vis[i]:
            continue
        c = chr(ord('A') + i)
        vis[i] = True
        backtrack1(s + c)
        vis[i] = False

def backtrack2(s):
    if len(s) == n:
        part2.append(s)
        return
    for i in range(1, n + 1):
        c = str(i)
        backtrack2(s + c)

def solve():
    global n, part1, part2
    n = int(input().strip())
    part1 = []
    part2 = []
    backtrack1("")
    backtrack2("")
    for s1 in part1:
        for s2 in part2:
            print(s1 + s2)

if __name__ == "__main__":
    t = 1
    # t = int(input())
    for _ in range(t):
        solve()