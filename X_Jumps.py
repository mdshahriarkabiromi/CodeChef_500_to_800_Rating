T=int(input())
for _ in range (T):
    X,Y=map(int,input().split())
    y_step=X//Y
    one_step=X%Y
    print(y_step+one_step)