#include<stdio.h>
int main()
{
    int N;
    int count=0;
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        int X;
        scanf("%d",&X);
        if (X%2==0)
        {
            count++;
        }
    }
    if (count>N-count)
    {
        printf("READY FOR BATTLE\n");
    }
    else
    {
        printf("NOT READY\n");
    }
    
    
    

    return 0;
}
