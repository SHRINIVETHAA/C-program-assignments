#include<stdio.h>
int main()
{
    int i,j,a[10],n,temp,max,max2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     max=a[0]; 
     
    }
    for(i=0;i<n;i++)
    {
       if(max<a[i+1])
       max2=a[i+1];
       break;
    }
    printf("%d",max2);
    return 0;
}
