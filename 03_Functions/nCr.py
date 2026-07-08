def nCr(n, r):
    if r < 0 or r > n:
        return 0

    r = min(r, n - r)
    ans = 1

    for i in range(1, r + 1):
        ans = ans * (n - r + i) // i

    return ans


n, r = map(int, input().split())
print(nCr(n, r))