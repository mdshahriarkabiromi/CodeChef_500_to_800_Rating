#include<stdio.h>
int main()
{
    int A,B,C,X;
    scanf("%d %d %d %d",&A,&B,&C,&X);
    if (A==X || B==X || C==X)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    

    return 0;
}
