import math
T=int(input())
for _ in range (T):
    N,K,M=map(int,input().split())
    print(math.ceil(N/(K*M)))