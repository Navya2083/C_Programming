#include<stdio.h>
int main()
{
    int num,i,sum;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum>num) printf("Abundant Number");
    else printf("Not Abundant Number");
    return 0;

}