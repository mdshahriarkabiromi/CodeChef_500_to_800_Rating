T = int(input())
for _ in range(T):
    A,B,C = map(int, input().split())

    # Get top two scores for Alice and Bob
    find_low = sorted([A,B,C], reverse=True)
    chef_pay=find_low[0]+find_low[1]
    print(chef_pay)