#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d\n",&N);
        printf("%d\n",(int)round(sqrt((double) N)));
    }
    

    return 0;
}
