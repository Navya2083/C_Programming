#include <stdio.h>
int sum(int x)
{
    int a=0,temp=x;
    while(x>0)
    {
        
        a+=x%10;
        x=x/10;
    }
    if (temp%a==0)
    {
        return a;
    }
    else
    {
        return -1;
    }
}
int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}