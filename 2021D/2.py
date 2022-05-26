def solve():
    N, C = [int(x) for x in input().split()]
    cuts = dict()
    for i in range(N):
        m,n = [int(x) for x in input().split()]
        cuts[m+1:n] += 1
    pass
if __name__=="__main__":
    T = int(input())
    for i in range(1, T+1):
        print(f'Case #{i}: ', end="")
        solve()