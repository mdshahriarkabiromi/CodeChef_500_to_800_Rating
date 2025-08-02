#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int A, B, X, Y;
        scanf("%d %d %d %d", &A, &B, &X, &Y);

        if (B > A)
        {
            int found = 0;
            for (int i = 0; i < X; i++)
            {
                A++;
                if (A == B)
                {
                    printf("YES\n");
                    found = 1;
                    break;
                }
            }
            if (!found) printf("NO\n");
        }
        else if (A == B)
        {
            printf("YES\n");
        }
        else
        {
            int found = 0;
            for (int i = 0; i < Y; i++)
            {
                A--;
                if (A == B)
                {
                    printf("YES\n");
                    found = 1;
                    break;
                }
            }
            if (!found) printf("NO\n");
        }
    }

    return 0;
}