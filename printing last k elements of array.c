#include<stdio.h>
int main()
{
    int n,k,a[10],i;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=k-1;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<k-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
