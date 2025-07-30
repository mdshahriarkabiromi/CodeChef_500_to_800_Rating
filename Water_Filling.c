#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int B1,B2,B3;
        scanf("%d %d %d",&B1,&B2,&B3);
        if (B1+B2+B3>=2)
        {
            printf("Not now\n");
        }
        else
        {
           printf("Water filling time\n");
        }
        
    }
    

    return 0;
}
