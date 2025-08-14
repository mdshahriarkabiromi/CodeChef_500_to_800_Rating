T=int(input())
for _ in range (T):
    X,Y,A,B=map(int,input().split())
    medal=0
    if X!=A and X!=B:
        medal+=1
    if Y!=A and Y!=B:
        medal+=1
    print(medal)