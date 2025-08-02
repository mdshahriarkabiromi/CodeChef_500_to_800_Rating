#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N, X;
        int count=0;
        scanf("%d %d", &N, &X);
        for (int i = 0; i < N; i++)
        {
            int N1;
            scanf("%d",&N1);
            if (N1>=X)
            {
                count++;
            }
            
        }

        printf("%d\n",count); 
    }
    return 0;
}