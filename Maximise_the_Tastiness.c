#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (a>b)
        {
            if (c>d)
            {
                printf("%d\n",a+c);
            }
            else
            {
                printf("%d\n",a+d);
            }
            
        }
        else
        {
            if (c>d)
            {
                printf("%d\n",b+c);
            }
            else
            {
                printf("%d\n",b+d);
            }
        }
        
    }

    return 0;
}