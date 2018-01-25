#include<stdio.h>
int main()
{
    int n,i,j,a[10],p=1,k[100];
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {   p=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]);
        else
        {
            p=p*a[j];

        }
        }
        k[i]=p;
    }
                
      for(i=0;i<n;i++) 
    printf("%d ",k[i]);
    return 0;
}
