#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[17];
    int n1;
    int flag=0;
    char b;
    int len=0;
    scanf("%d",&a[len++]);
    scanf("%c",&b);
    int res[16];
    int z=0;
    while(b!='\n')
    {
        scanf("%d",&a[len++]);
        scanf("%c",&b);
    }
    int j;
    int k;
    for(j=0;j<len;j++)
    {
        for(k=j+1;k<len;k++)
        {
            if(a[j]>a[k])
            {
                int t=a[j];
                a[j]=a[k];
                a[k]=t;
            }
        }
    }
    for(j=0;j<len-1;j++)
    {
        res[z]=a[j+1]-a[j];
        z++;
    }
    
    int diff=0;
    for(j=0;j<z;j++)
    {
        int count=1;
        for(k=j+1;k<z;k++)
        {
          if(res[j]==res[k])
          {
              count++;
              if(count>2)
              {
                  diff=res[j];
                  break;
              }
          }
        }
    }
    for(j=0;j<z;j++)
    {
        if(res[j]!=diff)
        {
            flag=1;
            if(j==z-1)
            {
                n1=a[j+1];
            }
            else
            {
                n1=a[j];
            }
        }
    }
    if(flag==0)
    {
        n1=-1;
    }
    printf("%d",n1);
}
