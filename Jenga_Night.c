#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N, X;
        scanf("%d %d", &N, &X);

        if (X % N == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}