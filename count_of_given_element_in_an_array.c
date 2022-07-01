#include<stdio.h>
int main()
{
    int i,arr[100],n,s,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            c+=1;
        }
    }
    printf("%d",c);
}