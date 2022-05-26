import math


def solve():
    n = int(input())
    count = 0
    for i in range(1, int(math.sqrt(n))+1):
        if (n % i == 0):
            if ((n // i) == i):
                if (str(i) == str(i)[::-1]):
                    count += 1
            else:
                if (str(i) == str(i)[::-1]):
                    count += 1
                if (str((n//i)) == str((n//i))[::-1]):
                    count += 1
    print(count)


if __name__ == "__main__":
    T = int(input())
    for i in range(1, T+1):
        print(f'Case #{i}: ', end="")
        solve()
