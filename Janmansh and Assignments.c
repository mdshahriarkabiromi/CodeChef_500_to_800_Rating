// Janmansh has to submit 
// 3
// 3 assignments for Chingari before 
// 10
// 10 pm and he starts to do the assignments at 
// X
// X pm. Each assignment takes him 
// 1
// 1 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?

#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int X;
        scanf("%d",&X);
        if(X+3<=10)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
    return 0;
}