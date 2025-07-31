#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d",&N);
        int count=0;
        for (int i = 0; i < N; i++)
        {
            int D;
            scanf("%d",&D);
            if (D>=1000)
            {
                count++;
            }
        }
         printf("%d\n",count);
    }
    

    return 0;
}
