#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int X;
        scanf("%d", &X);

        if (X % 5 != 0) {
            printf("-1\n");
        } else {
            int tens = X / 10;
            int remainder = X % 10;
            int fives = remainder / 5;
            printf("%d\n", tens + fives);
        }
    }
    return 0;
}