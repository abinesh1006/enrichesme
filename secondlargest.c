#include<stdio.h>
int main(int a,char **b)
{
    int i,j,max1=-1,max2=-1;
    int arr[1000];
    for(i=1;i<a;i++)
    {
        arr[i]=atoi(b[i]);
        if(max1<arr[i])
        {
            max2=max1;
            max1=arr[i];
         }
         else if(max2<arr[i] && arr[i]!=max1)
         {
             max2=arr[i];
         }
      
    }
    printf("%d",max2);    
  
    
}
