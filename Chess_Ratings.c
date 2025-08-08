#include<stdio.h>
#include<math.h>
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
            printf("%d\n",(int)ceil((double)(Y-X)/8));
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
