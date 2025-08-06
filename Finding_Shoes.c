#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases
    
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);  // Number of friends and left shoes Chef has
        
        int extra_shoes;
        if (M >= N) {
            // Enough left shoes, just need N right shoes
            extra_shoes = N;
        } else {
            // Not enough left shoes, need (N - M) left + N right shoes
            extra_shoes = (N - M) + N;
        }
        
        printf("%d\n", extra_shoes);
    }
    
    return 0;
}

