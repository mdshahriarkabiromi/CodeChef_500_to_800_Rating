T=int(input())
for _ in range (T):
    X,Y=map(int,input().split())
    point=(500-(X*2))+(1000-(4*(X+Y)))
    point2=(1000-(4*Y))+(500-((X+Y)*2))
    if point>point2:
        print(point)
    else:
        print(point2)