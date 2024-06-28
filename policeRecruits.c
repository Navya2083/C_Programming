#include<stdio.h>
int main()
 {
    int n,police=0,unsolvedCrimes=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int event;
        scanf("%d",&event);
        if (event== -1)
        {
            if (police > 0) 
            {
                police--;
            } 
            else 
            {
                unsolvedCrimes++;
            }
        } 
        else
        {
            police += event;
        }
    }
    printf("%d\n", unsolvedCrimes);
    
    return 0;
}