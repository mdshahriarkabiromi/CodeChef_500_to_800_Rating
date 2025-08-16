N = int(input())

max_lead = 0
winner = 0
score1 = 0
score2 = 0

for _ in range(N):
    S, T = map(int, input().split())
    score1 += S
    score2 += T

    lead = abs(score1 - score2)
    if lead > max_lead:
        max_lead = lead
        winner = 1 if score1 > score2 else 2

print(winner, max_lead)