#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if (A>B+C+D || B>A+C+D || C>A+B+D || D>A+B+C)
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
