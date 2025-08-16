T = int(input())
for _ in range(T):
    P, Q = map(int, input().split())
    total_points = P + Q
    block = total_points // 2
    if block % 2 == 0:
        print("Alice")
    else:
        print("Bob")