T = int(input())
for _ in range(T):
    N, X, K = map(int, input().split())
    max_fillable = K // X
    print(min(N, max_fillable))