T=int(input())
for _ in range (T):
    A,B,X,Y=map(int,input().split())
    if A/X>B/Y:
        print("Chefina")
    elif A/X<B/Y:
        print("Chef")
    else:
        print("Both")