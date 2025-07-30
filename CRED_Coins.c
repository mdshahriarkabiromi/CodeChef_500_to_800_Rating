#include<stdio.h>
int main()
{
   int T;
   scanf("%d",&T);
   for (int i = 0; i < T; i++)
   {
     int X,Y;
    scanf("%d %d",&X,&Y);
    if (X*Y>=100)
    {
        printf("%d\n",X*Y/100);
    }
    else
    {
        printf("0\n");
    }
   }
    return 0;
}
