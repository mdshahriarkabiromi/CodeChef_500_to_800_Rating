import math
T=int(input())
for _ in range (T):
    N=int(input())
    print((int)(math.factorial(N)/math.factorial(N-2)))