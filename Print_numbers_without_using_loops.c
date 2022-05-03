#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(!(n>=1 && n<=1000))
    {
        printf("The Number Series is Not Possible Print");
    }
    for(i=1;i<=n && n<=1000;i++)
    {
        printf("%d ",i);
    }
}