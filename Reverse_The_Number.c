#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);

        int reverseNum = 0;
        while (N != 0)
        {
            int digit = N % 10;
            reverseNum = reverseNum * 10 + digit;
            N = N / 10;
        }

        printf("%d\n", reverseNum);
    }

    return 0;
}