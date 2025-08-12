#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int N,K,M;
        scanf("%d %d %d",&N,&K,&M);

        printf("%d\n",(int)round((double)(N/(M*K)))); 
    }
    return 0;
}
