#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,vow=0;
    char a[100];
    scanf("%[^
]s",&a[i]);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
       if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
       {
           vow=vow+1;
       }
    }
    printf("%d",vow);
}