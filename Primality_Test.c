#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int N,count=0;
        scanf("%d",&N);
        
        if (N<2)
        {
            printf("no\n");
        }
        else
        {
            for (int i = 1; i <= N; i++)
            {
                if (N%i==0)
                {
                 count++;
                }
            }
            if (count>2)
            {
                printf("no\n");
            }
            else
            {
                printf("yes\n");
            }    
        }
        
    }
    return 0;
}
