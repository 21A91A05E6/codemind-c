#include<stdio.h>
int main()
{
    int arr[100],i,n,count=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                count++;
                arr[j]=-1;
            }
        }
        if(count>n/2)
        {
            printf("%d",arr[i]);
            return 0;
        }
    }
    return 0;
}