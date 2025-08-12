#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int X,Y,R;
        scanf("%d %d %d",&X,&Y,&R);
        printf("%d\n", (int)ceil(((R / 30.0) + X) / Y));
         
    }
    

    return 0;
}
