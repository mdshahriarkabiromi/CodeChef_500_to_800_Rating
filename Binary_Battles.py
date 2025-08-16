T = int(input())
for _ in range(T):
    N, A, B = map(int, input().split())
    time = 0
    while N > 1:
        N = N // 2 
        time += A 
        if(N>1):
            time += B 
    print(time)