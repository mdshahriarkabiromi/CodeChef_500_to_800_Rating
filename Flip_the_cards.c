#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  // Total cards and face-up cards
        
        int flips = (X < N - X) ? X : (N - X);  // Minimum flips
        printf("%d\n", flips);
    }
    
    return 0;
}