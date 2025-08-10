#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X,Y,Z;
        scanf("%d %d %d",&X,&Y,&Z);
        if (X>3)
        {   
            int l;
            if (X%3==0)
            {
                l=X/3;
                l=l-1;
            }
            else
            {
                l=(X/3);
            }
            printf("%d\n",X*Y+l*Z);
        }
        else
        {
            printf("%d\n",X*Y);
        }
         
    }
    

    return 0;
}
