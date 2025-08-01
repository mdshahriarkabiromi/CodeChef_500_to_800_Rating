#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
    int X,Y;
    scanf("%d %d",&X,&Y);
    if (X>=Y)
    {
        printf("0\n");
    }
    else if (Y%X==0)
    {
        printf("%d\n",Y/X-1);
    }
    
    else
    {
        printf("%d\n",Y/X);
    } 
    }
    

    return 0;
}
