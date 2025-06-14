
#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int N,X,cost;
        scanf("%d %d ",&N,&X);
        if(N>6)
        {
            cost=N/6;
            if(N%6 != 0)
            {
                cost++;
            }
            cost=(cost*X);
        }
        else
        {
            cost=X/N;
        }
        printf("%d\n",cost);

        
    }
    
    return 0;
}