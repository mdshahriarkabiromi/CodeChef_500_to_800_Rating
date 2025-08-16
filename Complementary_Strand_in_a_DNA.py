T = int(input())
for _ in range(T):
    N = int(input())
    S = input()
    ans = ""
    for i in range(N):
        if S[i] == "A":
            ans += "T"
        elif S[i] == "T":
            ans += "A"
        elif S[i] == "G":
            ans += "C"
        elif S[i] == "C":
            ans += "G"
    print(ans)