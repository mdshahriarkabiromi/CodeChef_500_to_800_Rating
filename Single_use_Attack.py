import math
T=int(input())
for _ in range (T):
    H,X,Y=map(int,input().split())
    health_afterSpecial=H-Y
    attack=health_afterSpecial/X+1
    print(math.ceil(attack))