#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d",&N);
        printf("%d\n",(N*1000)/100);
    }
    

    return 0;
}
