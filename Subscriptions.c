#include<stdio.h>
#include<math.h>

int main() {
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++) {
        int N, X, cost;
        scanf("%d %d", &N, &X);
        
        if (N > 6) {
            int subscription_number = (int)ceil((float)N / 6);
            cost = X * subscription_number;
        } else {
            cost = X;
        }
        
        printf("%d\n", cost);
    }
    return 0;
}