#include<stdio.h>
int main()
{
    int a[10],i,max,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
    if(max<a[i+1])
    {
        max=a[i+1];
    }}
    printf("%d",max);
    return 0;
}
