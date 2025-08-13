#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int N,count=0,count1=0;
        scanf("%d",&N);
        char code[50];
        for (int j = 0; j < N; j++)
        {
            scanf("%s",&code);
            if (strcmp(code, "START38") == 0)
            {
                count++;
            }
            if (strcmp(code, "LTIME108") == 0)
            {
                count1++;
            }
        }
        printf("%d %d\n",count,count1);
    }
    return 0;
}
