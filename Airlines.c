#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X,N;
        scanf("%d %d",&X,&N);
        if (X*100>N)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", (int)ceil((float)(N - X * 100) / 100));
        }
         
    }
    

    return 0;
}
