T=int(input())
for _ in range (T):
    A,B,C=map(int,input().split())
    sort=sorted([A,B,C])
    print(sort[1])