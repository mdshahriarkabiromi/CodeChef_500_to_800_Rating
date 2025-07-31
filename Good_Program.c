#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d",&N);
        if (N%4==0)
        {
            printf("GOOD\n");
        }
        else
        {
            printf("NOT GOOD\n");
        }
         
    }
    return 0;
}
