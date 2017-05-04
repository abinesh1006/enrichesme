#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[50][50];
    int i,j;
    int m=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(i==0)
            {
                a[i][j]=m;
                m=m+n-j;
            }
            else
            {
                a[i][j]=a[i-1][j]+1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    

}
