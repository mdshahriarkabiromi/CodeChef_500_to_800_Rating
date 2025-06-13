// In Chefland, there are 
// X
// X schools, and each school has 
// Y
// Y students.
// The year end results are in and a total of 
// Z
// Z students passed the exams.

// Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than 
// 50
// %
// 50%.

#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int X,Y,Z;
        scanf("%d %d %d",&X,&Y,&Z);
        if(Z>(X*Y)/2)
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