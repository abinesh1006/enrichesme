#include<stdio.h>
#include <stdlib.h>
int division(int,int,int[]);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(min<a[i])
        {
            min=a[i];
        }
    }
    int b[100];
    j=0;
    int count=0;
    for(i=2;i<=min;i++)
    {
        if(a[0]%i==0)
        {
            b[j]=i;
            j++;
        }
    }
    int flag=0;
    for(i=0;i<j;i++)
    {
        if(division(b[i],n,a)==1)
        {
            count++;
        }
    }
    printf("%d",count);
    
    
}
int division(int n,int x,int a[])
{
    int i;
    int count=0;
    for(i=1;i<x;i++)
    {
        if(a[i]%n==0)
        {
            count++;
        }
    }
        if(count==x-1)
        {
        	return 1;
		}
		else
		{
			return 0;
		}
		
      
}
