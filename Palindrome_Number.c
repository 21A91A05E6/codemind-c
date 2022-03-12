#include<stdio.h>
int main()
{
    int n,t,k,i,d,sum=0;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d",&n);
        k=n;
        while(n>0)
        {
            d=n%10;
            sum=sum*10+d;
            n=n/10;
        }
        if(sum==k)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        sum=0;
    }
}