#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a[100];
    int i;
    int n;
    scanf("%d",&n);
    int b[100];
    int j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]%2==0)
        {
            a[j]=b[i];
            j++;
        }
    }
    j=j-1;
    int max1=0;
    int max2=0;
    for(i=1;i<j;i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1=a[i];
        }
        else if(max2<a[i])
        {
           max2=a[i];
        }
    }
    if(max2!=0)
    {
        printf("%d",max2);
    }
    else
    {
        printf("No second largest even numbers");
    }
}
