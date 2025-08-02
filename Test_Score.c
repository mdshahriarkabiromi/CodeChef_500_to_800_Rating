#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N,X,Y;
        scanf("%d %d %d",&N,&X,&Y);

        if (N*X>=Y)
        {
            if (Y%X==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        }
        else
        {
            printf("NO\n");
        }
        
    }
    return 0;
}