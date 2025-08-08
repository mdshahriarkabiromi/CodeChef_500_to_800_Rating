#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X,Y;
        scanf("%d %d",&X,&Y);
        if (Y>X)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",X/Y);
        }
        
    }
    

    return 0;
}
