from collections import defaultdict


def solve():
    s = input().strip()
    m = defaultdict(int)
    d = defaultdict(int)

    for i in s:
        m[i] += 1

    len_unique = len(m)

    res = float('inf')
    l = 0
    cnt = 0

    for i in range(len(s)):
        d[s[i]] += 1
        if d[s[i]] == 1:
            cnt += 1
        if cnt == len_unique:
            while d[s[l]] > 1:
                d[s[l]] -= 1
                l += 1
            res = min(res, i - l + 1)

    print(res)


t = int(input())
for _ in range(t):
    solve()