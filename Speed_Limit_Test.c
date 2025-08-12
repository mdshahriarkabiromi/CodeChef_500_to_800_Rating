#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int A, X, B, Y;
        scanf("%d %d %d %d", &A, &X, &B, &Y);
        if (A * Y > B * X)
            printf("Alice\n");
        else if (B * X > A * Y)
            printf("Bob\n");
        else
            printf("Equal\n");
        }
    return 0;
}