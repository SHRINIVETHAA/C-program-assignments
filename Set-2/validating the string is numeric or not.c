#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int i,count=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0' && s[i]<='9')
        count++;
    }
 if(count>0)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
 return 0;
}
