#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X;
        scanf("%d",&X);
        if (X%3==0)
        {
            printf("NORMAL\n");
        }
        else if (X%3==1)
        {
            printf("HUGE\n");
        }
        else
        {
            printf("SMALL\n");
        }
        
         
    }
    

    return 0;
}
