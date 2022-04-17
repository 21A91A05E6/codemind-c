#include<stdio.h>
int main()
{
    int i,n,a[100],z=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            z++;
        }
        else
        y++;
    }
    printf("%d %d",z, y);
    return 0;

}