#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int N,X;
        scanf("%d %d",&N,&X);
        printf("%d\n",(int)ceil((double)(N*X)/4));
    }
    

    return 0;
}
