T=int(input())
for _ in range (T):
    X,Y=map(int,input().split())
    chef_Floor=(X - 1) // 10 + 1
    chefina_Floor=(Y - 1) // 10 + 1
    if chef_Floor>chefina_Floor:
        print(chef_Floor-chefina_Floor)
    else:
        print(chefina_Floor-chef_Floor)