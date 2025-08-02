#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d",&N);
        if (1<=N && N<=10)
        {
            printf("Lower Double\n");
        }
        else if (11<=N && N<=15)
        {
            printf("Lower Single\n");
        }
        else if (16<=N && N<=25)
        {
            printf("Upper Double\n");
        }
        else
        {
            printf("Upper Single\n");
        }
         
    }
    

    return 0;
}
