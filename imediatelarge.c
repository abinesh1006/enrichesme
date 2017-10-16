#include<stdio.h>
#include <stdlib.h>

int main()
{
   int a,arr[100000];
   scanf("%d",&a);
   int i,j,k,f;
   for(i=0;i<a;i++)
   {
       scanf("%d",&arr[i]);
       f=0;
       for(j=i-1;j>=0;j--)
       {
           if(arr[i]<arr[j])
           {
               printf("%d ",arr[j]);
               f=1;
               break;
           }
       }
       if(f==0)
       {
           printf("%d ",0);
       }
   }

}
