#include <stdio.h>
#define MAX 500

void multiply(int x, int res[], int *res_size) {
    int carry = 0;
    for (int i = 0; i < *res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res[(*res_size)++] = carry % 10;
        carry /= 10;
    }
}

void bigFactorial(int n) {
    int res[MAX];
    res[0] = 1;
    int res_size = 1;

    for (int x = 2; x <= n; x++)
        multiply(x, res, &res_size);

    for (int i = res_size - 1; i >= 0; i--)
        printf("%d", res[i]);
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        bigFactorial(n);
    }
    return 0;
}