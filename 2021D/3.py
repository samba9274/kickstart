def solve():
    N,M = [int(x) for x in input().split()]
    ps = set()
    for _ in range(N):
        m,n = [int(x) for x in input().split()]
        ps.update(range(m,n+1))
    students = [int(x) for x in input().split()]
if __name__=="__main__":
    T = int(input())
    for i in range(1, T+1):
        print(f'Case #{i}: ', end="")
        solve()