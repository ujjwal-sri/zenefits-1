#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n, half,j,total;
    total = 0;half =0;
    scanf("%d", &n);
    int prbs[n];
    for(j=0; j<n; j++)
    {
        scanf("%d", &prbs[j]);
        total += prbs[j];
    }
    j=0;
    if(total%2==0)
    {
        while(half<total/2)
        {
            half += prbs[j];
            j++;
        }
    }
    else
    {
        while(half<((total/2)+1))
        {
            half += prbs[j];
            j++;
        }
    }
 
    printf("%d", j);
    return 0;
}
