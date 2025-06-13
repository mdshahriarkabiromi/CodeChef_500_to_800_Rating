// Recently Chef joined a new company. In this company, the employees have to work for 
// X
// X hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for 
// Y
// Y hours 
// (
// Y
// <
// X
// )
// (Y<X) on Friday. Saturdays and Sundays are holidays.

// Determine the total number of working hours in one week.

#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        int X,Y;
        scanf("%d %d",&X,&Y);
        printf("%d\n",X*4+Y);
    }
    
    return 0;
}