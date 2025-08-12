#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        // Dracula gets his first Tuesday meal on day 2 (i.e., tomorrow)
        if (N < 2) {
            printf("0\n");
        } else {
            // First Tuesday is on day 2, then every 7 days after
            int count = 1 + (N - 2) / 7;
            printf("%d\n", count);
        }
    }

    return 0;
}