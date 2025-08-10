#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X,Y;
        scanf("%d %d",&X,&Y);
        if (21-(X+Y)>10)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",21-(X+Y));
        }
         
    }
    

    return 0;
}
