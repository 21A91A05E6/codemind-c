#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2)
        {
            sum+=arr[i];
        }
    }
    printf("%d ",sum);
}