T = int(input())

for _ in range(T):
    N, K = map(int, input().split())
    values = list(map(int, input().split()))  # Read all N values at once
    count = 0

    for A in values:
        if (A + K) % 7 == 0:
            count += 1

    print(count)