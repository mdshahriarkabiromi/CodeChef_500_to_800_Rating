#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
    int W,X,Y,Z;
    scanf("%d %d %d %d",&W,&X,&Y,&Z);
    if (W==X || W==Y || W==Z || W==X+Y || W==Y+Z || W==Z+X || W==X+Y+Z)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    } 
    }
    

    return 0;
}
