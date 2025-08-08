#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X1,Y1,X2,Y2;
        scanf("%d %d %d %d",&X1,&Y1,&X2,&Y2);
        int X=X1-X2;
        int Y=Y1-Y2;
        if (X<0)
        {
            X=X*-1;
        }
        if (Y<0)
        {
            Y=Y*-1;
        }
        if (X>Y)
        {
            printf("%d\n",X);
        }
        else
        {
            printf("%d\n",Y);
        } 
    }
    

    return 0;
}
