#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int A,B;
        scanf("%d %d",&A,&B);
        if ((A*100)/10>(B*100)/20)
        {
            printf("FIRST\n");
        }
        else if ((A*100)/10<(B*100)/20)
        {
            printf("SECOND\n");
        }
        else
        {
            printf("ANY\n");
        }
          
    }
    return 0;
}
