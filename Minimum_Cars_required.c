#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d",&N);
        if (N<4)
        {
            printf("1\n");
        }
        else
        {
            printf("%d\n",(int)ceil(((float)N/4)));
        }
        
         
    }
    

    return 0;
}
