// You are given 
// 3
// 3 numbers 
// A
// ,
// B
// ,
// A,B, and 
// C
// C.

// Determine whether the average of 
// A
// A and 
// B
// B is strictly greater than 
// C
// C or not?

// NOTE: Average of 
// A
// A and 
// B
// B is defined as 
// (
// A
// +
// B
// )
// 2
// 2
// (A+B)
// ​
//  . For example, average of 
// 5
// 5 and 
// 9
// 9 is 
// 7
// 7, average of 
// 5
// 5 and 
// 8
// 8 is 
// 6.5
// 6.5.

#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        float A,B,C;
        scanf("%f %f %f",&A,&B,&C);
        if((A+B)/2>C)
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