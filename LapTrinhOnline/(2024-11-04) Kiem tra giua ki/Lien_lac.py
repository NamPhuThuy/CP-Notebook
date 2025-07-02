N = 1005
adj = [[] for _ in range(N)]
t = [0] * N
vis = [False] * N

maxT = 0
id = 0


def dfs(u):
    global maxT, id
    vis[u] = True
    if t[u] > maxT:
        maxT = t[u]
        id = u
    for v in adj[u]:
        if not vis[v]:
            dfs(v)


def solve():
    global maxT, id
    n, m = map(int, input().split())
    t_input = list(map(int, input().split()))
    for i in range(1, n + 1):
        t[i] = t_input[i - 1]

    for _ in range(m):
        u, v = map(int, input().split())
        adj[u].append(v)
        adj[v].append(u)

    res = []
    for i in range(1, n + 1):
        if not vis[i]:
            maxT = t[i]
            id = i
            dfs(i)
            res.append(id)

    print(len(res))
    res.sort()
    print(" ".join(map(str, res)))


if __name__ == "__main__":
    solve()