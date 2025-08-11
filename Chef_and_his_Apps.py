T = int(input())
for _ in range(T):
    S, X, Y, Z = map(int, input().split())
    available = S - (X + Y)
    
    if available >= Z:
        print(0)
    elif S - X >= Z or S - Y >= Z:
        print(1)
    else:
        print(2)