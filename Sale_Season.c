#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X;
        scanf("%d",&X);
        if (X <= 100)
        printf("%d\n", X);
        else if (X > 100 && X <= 1000)
        printf("%d\n", X - 25);
        else if (X > 1000 && X <= 5000)
        printf("%d\n", X - 100);
        else
        printf("%d\n", X - 500);
         
    }
    return 0;
}
