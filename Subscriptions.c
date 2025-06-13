// A new TV streaming service was recently started in Chefland called the Chef-TV.

// A group of 
// N
// N friends in Chefland want to buy Chef-TV subscriptions. We know that 
// 6
// 6 people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is 
// X
// X rupees. Determine the minimum total cost that the group of 
// N
// N friends will incur so that everyone in the group is able to use Chef-TV.

#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int N,X,cost;
        scanf("%d %d ",&N,&X);
        if(N>6)
        {
            cost=N/6;
            if(N%6 != 0)
            {
                cost++;
            }
            cost=(cost*X);
        }
        else
        {
            cost=X/N;
        }
        printf("%d\n",cost);

        
    }
    
    return 0;
}