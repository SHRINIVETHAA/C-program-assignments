#include<stdio.h>
int main()
{
    int n,rev=0,num,temp;
    scanf("%d",&n);
temp=n;
    while(n!=0)
    {
        num=n%10;
        rev=(rev*10)+num;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}
