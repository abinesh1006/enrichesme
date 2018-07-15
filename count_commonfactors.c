#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j,flag=0,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if(min<a[i])
        {
            min=a[i];
        }
    }
    for(i=2;i<=min;i++)
    {
	    flag=1;    
        if(a[0]%i==0)
        {
            for(j=0;j<n;j++)
	    {
		    if(a[j]%i!=0)
		    {
			    flag=0;
			    break;
		    }
	    }
	    if(flag==1)
	    {
		count++;    
	    }
			
        }
    }
    printf("%d",count);
    //printf("%d",count>0?count:1);    // assuming no common factors greater than 1 ,1 is a common factor
    
    
}
