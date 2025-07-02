def solve(N, A):
    B = [1 if x > 0 else -1 for x in A]

    pref = [0] * (N + 1)
    for i in range(N):
        pref[i + 1] = pref[i] + B[i]

    cnt = {0: 1}
    res = 0

    for i in range(1, N + 1):
        res += cnt.get(pref[i], 0)
        cnt[pref[i]] = cnt.get(pref[i], 0) + 1

    return res


if __name__ == "__main__":
    N = int(input())
    A = list(map(int, input().split()))
    print(solve(N, A))