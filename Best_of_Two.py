T = int(input())
for _ in range(T):
    A1, A2, A3, B1, B2, B3 = map(int, input().split())

    # Get top two scores for Alice and Bob
    alice_scores = sorted([A1, A2, A3], reverse=True)
    bob_scores = sorted([B1, B2, B3], reverse=True)

    AL = alice_scores[0] + alice_scores[1]
    BO = bob_scores[0] + bob_scores[1]

    # Compare and print result
    if AL > BO:
        print("Alice")
    elif BO > AL:
        print("Bob")
    else:
        print("Tie")