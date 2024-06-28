#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int yearCount=0;
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        yearCount++;
    }
    printf("%d",yearCount);
    return 0;
}