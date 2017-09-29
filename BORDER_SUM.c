#include<stdio.h>
#include <stdlib.h>

int main()
{
     int a[20][20];
     int n;
     scanf("%d",&n);
     int j,i;
     int sum=0;
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             scanf("%d",&a[i][j]);
             if(i==0 || i==n-1)
             {
                 if(j==0 || j==n-1)
                 {
                     sum=sum+a[i][j];
                 }
             }
         }
     }
     printf("%d",sum);
     

}
