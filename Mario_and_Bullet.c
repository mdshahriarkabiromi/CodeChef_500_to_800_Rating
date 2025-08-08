#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X,Y,Z;
        scanf("%d %d %d",&X,&Y,&Z);
        if (Y/X<Z)
        {
            printf("%d\n",Z-(Y/X));
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
