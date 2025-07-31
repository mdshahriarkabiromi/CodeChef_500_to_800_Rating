#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X;
        scanf("%d",&X);
        
        if (X<=50)
        {
            printf("LEFT\n");
        }
        else
        {
            printf("RIGHT\n");
        }
        
    }
    

    return 0;
}
