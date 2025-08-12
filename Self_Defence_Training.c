#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int N,count=0;
	    scanf("%d",&N);
	    for(int j=0;j<N;j++)
	    {
            int A;
	        scanf("%d",&A);
	        if(A<=60 && A>=10)
	        {
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}

}

