#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X,Y,D;
        scanf("%d %d %d",&X,&Y,&D);
        if (X>Y)
        {
            if (X-Y<=D)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            if (Y-X<=D)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        
         
    }
    

    return 0;
}
