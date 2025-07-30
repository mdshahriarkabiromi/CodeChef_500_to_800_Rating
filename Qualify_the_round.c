#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X,A,B;
        scanf("%d %d %d",&X,&A,&B);
        if (A*1+B*2>=X)
        {
            printf("Qualify\n");
        }
        else
        {
            printf("NotQualify\n");
        }
         
    }
    
    return 0;
}
