#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int A,B,X,Y;
        scanf("%d %d %d %d",&A,&B,&X,&Y);
        if (X*Y>=A*B)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
         
    }
    

    return 0;
}
