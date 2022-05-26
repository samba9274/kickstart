import math


def area(radius): return radius**2 * 3.1415927


def solve():
    R, A, B = [int(x) for x in input().split()]
    n = int(math.log(R, B/A))
    res = 0
    for i in range(n+1):
        res += area((R * ((A / B)**i))) + \
            area((R * ((A ** (i + 1)) / (B ** i))))
    print('{0:.6f}'.format(res))


if __name__ == "__main__":
    T = int(input())
    for i in range(1, T+1):
        print(f'Case #{i}: ', end="")
        solve()
