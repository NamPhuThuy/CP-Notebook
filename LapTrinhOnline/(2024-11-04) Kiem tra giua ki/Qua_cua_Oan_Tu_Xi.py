def solve():
    s = input().split()
    result = []

    for ch in s:
        if ch == "B":
            result.append("O")
        elif ch == "O":
            result.append("K")
        else:
            result.append("B")

    print(" ".join(result))


if __name__ == "__main__":
    solve()