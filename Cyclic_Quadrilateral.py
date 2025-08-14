T=int(input())
for _ in range (T):
    A,B,C,D=map(int,input().split())
    A_C=A+C
    B_D=B+D
    if A_C and B_D ==180:
        print("YES")
    else:
        print("NO")