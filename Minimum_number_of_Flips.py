T = int(input())
for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))  # Read the entire array once
    total = sum(A)
    if total % 2 != 0:
        print(-1)
    else:
        print(abs(total // 2))