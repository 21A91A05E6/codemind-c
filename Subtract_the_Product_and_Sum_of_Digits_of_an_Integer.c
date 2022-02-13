#include<stdio.h>
int main()
{
    int n,d,k,prod=1,sum=0,diff;
    scanf("%d",&n);
    k=n;
    while(d=n%10)
    {
        prod=prod*d;
        sum=sum+d;
        n=n/10;
    }
    diff=prod-sum;
    printf("%d",diff);
}