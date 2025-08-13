import math
T=int(input())
for _ in range (T):
    A,B,K=map(int,input().split())
    if A>B:
        step=math.ceil((A-B)/K)
        print(step)
    elif B>A:
        step=math.ceil((B-A)/K)
        print(step)
    else:
        step=0
        print(step)